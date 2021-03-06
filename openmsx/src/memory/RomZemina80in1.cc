// $Id: RomZemina80in1.cc 12527 2012-05-17 17:34:11Z m9710797 $

// Zemina 80-in-1 cartridge
//
// Information obtained by studying MESS sources:
//   0x4000 : 0x4000-0x5FFF
//   0x4001 : 0x6000-0x7FFF
//   0x4002 : 0x8000-0x9FFF
//   0x4003 : 0xA000-0xBFFF

#include "RomZemina80in1.hh"
#include "CacheLine.hh"
#include "Rom.hh"
#include "serialize.hh"

namespace openmsx {

RomZemina80in1::RomZemina80in1(const DeviceConfig& config, std::auto_ptr<Rom> rom)
	: Rom8kBBlocks(config, rom)
{
	reset(EmuTime::dummy());
}

void RomZemina80in1::reset(EmuTime::param /*time*/)
{
	setUnmapped(0);
	setUnmapped(1);
	for (int i = 2; i < 6; i++) {
		setRom(i, i - 2);
	}
	setUnmapped(6);
	setUnmapped(7);
}

void RomZemina80in1::writeMem(word address, byte value, EmuTime::param /*time*/)
{
	if ((0x4000 <= address) && (address < 0x4004)) {
		setRom(2 + (address - 0x4000), value);
	}
}

byte* RomZemina80in1::getWriteCacheLine(word address) const
{
	if (address == (0x4000 & CacheLine::HIGH)) {
		return NULL;
	} else {
		return unmappedWrite;
	}
}

REGISTER_MSXDEVICE(RomZemina80in1, "RomZemina80in1");

} // namespace openmsx
