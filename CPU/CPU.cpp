#include "CPU.h"

CPU::CPU()
{
	opcodeMap =
	{
		[this]() {return OP_0x00(); }, [this]() {return OP_0x01(); }, 
		[this]() {return OP_0x02(); }, [this]() {return OP_0x03(); },
		[this]() {return OP_0x04(); }, [this]() {return OP_0x05(); }, 
		[this]() {return OP_0x06(); }, [this]() {return OP_0x07(); }, 
		[this]() {return OP_0x08(); }, [this]() {return OP_0x09(); }, 
		[this]() {return OP_0x0A(); }, [this]() {return OP_0x0B(); }, 
		[this]() {return OP_0x0C(); }, [this]() {return OP_0x0D(); }, 
		[this]() {return OP_0x0E(); }, [this]() {return OP_0x0F(); },

		[this]() {return OP_0x10(); }, [this]() {return OP_0x11(); },
		[this]() {return OP_0x12(); }, [this]() {return OP_0x13(); },
		[this]() {return OP_0x14(); }, [this]() {return OP_0x15(); }, 
		[this]() {return OP_0x16(); }, [this]() {return OP_0x17(); }, 
		[this]() {return OP_0x18(); }, [this]() {return OP_0x19(); }, 
		[this]() {return OP_0x1A(); }, [this]() {return OP_0x1B(); }, 
		[this]() {return OP_0x1C(); }, [this]() {return OP_0x1D(); }, 
		[this]() {return OP_0x1E(); }, [this]() {return OP_0x1F(); },

		[this]() {return OP_0x20(); }, [this]() {return OP_0x21(); },
		[this]() {return OP_0x22(); }, [this]() {return OP_0x23(); },
		[this]() {return OP_0x24(); }, [this]() {return OP_0x25(); }, 
		[this]() {return OP_0x26(); }, [this]() {return OP_0x27(); }, 
		[this]() {return OP_0x28(); }, [this]() {return OP_0x29(); }, 
		[this]() {return OP_0x2A(); }, [this]() {return OP_0x2B(); }, 
		[this]() {return OP_0x2C(); }, [this]() {return OP_0x2D(); }, 
		[this]() {return OP_0x2E(); }, [this]() {return OP_0x2F(); },

		[this]() {return OP_0x30(); }, [this]() {return OP_0x31(); },
		[this]() {return OP_0x32(); }, [this]() {return OP_0x33(); },
		[this]() {return OP_0x34(); }, [this]() {return OP_0x35(); }, 
		[this]() {return OP_0x36(); }, [this]() {return OP_0x37(); }, 
		[this]() {return OP_0x38(); }, [this]() {return OP_0x39(); }, 
		[this]() {return OP_0x3A(); }, [this]() {return OP_0x3B(); }, 
		[this]() {return OP_0x3C(); }, [this]() {return OP_0x3D(); }, 
		[this]() {return OP_0x3E(); }, [this]() {return OP_0x3F(); },

		[this]() {return OP_0x40(); }, [this]() {return OP_0x41(); },
		[this]() {return OP_0x42(); }, [this]() {return OP_0x43(); },
		[this]() {return OP_0x44(); }, [this]() {return OP_0x45(); }, 
		[this]() {return OP_0x46(); }, [this]() {return OP_0x47(); }, 
		[this]() {return OP_0x48(); }, [this]() {return OP_0x49(); }, 
		[this]() {return OP_0x4A(); }, [this]() {return OP_0x4B(); }, 
		[this]() {return OP_0x4C(); }, [this]() {return OP_0x4D(); }, 
		[this]() {return OP_0x4E(); }, [this]() {return OP_0x4F(); },

		[this]() {return OP_0x50(); }, [this]() {return OP_0x51(); },
		[this]() {return OP_0x52(); }, [this]() {return OP_0x53(); },
		[this]() {return OP_0x54(); }, [this]() {return OP_0x55(); }, 
		[this]() {return OP_0x56(); }, [this]() {return OP_0x57(); }, 
		[this]() {return OP_0x58(); }, [this]() {return OP_0x59(); }, 
		[this]() {return OP_0x5A(); }, [this]() {return OP_0x5B(); }, 
		[this]() {return OP_0x5C(); }, [this]() {return OP_0x5D(); }, 
		[this]() {return OP_0x5E(); }, [this]() {return OP_0x5F(); },

		[this]() {return OP_0x60(); }, [this]() {return OP_0x61(); },
		[this]() {return OP_0x62(); }, [this]() {return OP_0x63(); },
		[this]() {return OP_0x64(); }, [this]() {return OP_0x65(); }, 
		[this]() {return OP_0x66(); }, [this]() {return OP_0x67(); }, 
		[this]() {return OP_0x68(); }, [this]() {return OP_0x69(); }, 
		[this]() {return OP_0x6A(); }, [this]() {return OP_0x6B(); }, 
		[this]() {return OP_0x6C(); }, [this]() {return OP_0x6D(); }, 
		[this]() {return OP_0x6E(); }, [this]() {return OP_0x6F(); },

		[this]() {return OP_0x70(); }, [this]() {return OP_0x71(); },
		[this]() {return OP_0x72(); }, [this]() {return OP_0x73(); },
		[this]() {return OP_0x74(); }, [this]() {return OP_0x75(); },
		[this]() {return OP_0x76(); }, [this]() {return OP_0x77(); },
		[this]() {return OP_0x78(); }, [this]() {return OP_0x79(); },
		[this]() {return OP_0x7A(); }, [this]() {return OP_0x7B(); },
		[this]() {return OP_0x7C(); }, [this]() {return OP_0x7D(); },
		[this]() {return OP_0x7E(); }, [this]() {return OP_0x7F(); },

		[this]() {return OP_0x80(); }, [this]() {return OP_0x81(); },
		[this]() {return OP_0x82(); }, [this]() {return OP_0x83(); },
		[this]() {return OP_0x84(); }, [this]() {return OP_0x85(); },
		[this]() {return OP_0x86(); }, [this]() {return OP_0x87(); },
		[this]() {return OP_0x88(); }, [this]() {return OP_0x89(); },
		[this]() {return OP_0x8A(); }, [this]() {return OP_0x8B(); },
		[this]() {return OP_0x8C(); }, [this]() {return OP_0x8D(); },
		[this]() {return OP_0x8E(); }, [this]() {return OP_0x8F(); },

		[this]() {return OP_0x90(); }, [this]() {return OP_0x91(); },
		[this]() {return OP_0x92(); }, [this]() {return OP_0x93(); },
		[this]() {return OP_0x94(); }, [this]() {return OP_0x95(); },
		[this]() {return OP_0x96(); }, [this]() {return OP_0x97(); },
		[this]() {return OP_0x98(); }, [this]() {return OP_0x99(); },
		[this]() {return OP_0x9A(); }, [this]() {return OP_0x9B(); },
		[this]() {return OP_0x9C(); }, [this]() {return OP_0x9D(); },
		[this]() {return OP_0x9E(); }, [this]() {return OP_0x9F(); },

		[this]() {return OP_0xA0(); }, [this]() {return OP_0xA1(); },
		[this]() {return OP_0xA2(); }, [this]() {return OP_0xA3(); },
		[this]() {return OP_0xA4(); }, [this]() {return OP_0xA5(); },
		[this]() {return OP_0xA6(); }, [this]() {return OP_0xA7(); },
		[this]() {return OP_0xA8(); }, [this]() {return OP_0xA9(); },
		[this]() {return OP_0xAA(); }, [this]() {return OP_0xAB(); },
		[this]() {return OP_0xAC(); }, [this]() {return OP_0xAD(); },
		[this]() {return OP_0xAE(); }, [this]() {return OP_0xAF(); },

		[this]() {return OP_0xB0(); }, [this]() {return OP_0xB1(); },
		[this]() {return OP_0xB2(); }, [this]() {return OP_0xB3(); },
		[this]() {return OP_0xB4(); }, [this]() {return OP_0xB5(); }, 
		[this]() {return OP_0xB6(); }, [this]() {return OP_0xB7(); }, 
		[this]() {return OP_0xB8(); }, [this]() {return OP_0xB9(); }, 
		[this]() {return OP_0xBA(); }, [this]() {return OP_0xBB(); }, 
		[this]() {return OP_0xBC(); }, [this]() {return OP_0xBD(); }, 
		[this]() {return OP_0xBE(); }, [this]() {return OP_0xBF(); },

		[this]() {return OP_0xC0(); }, [this]() {return OP_0xC1(); },
		[this]() {return OP_0xC2(); }, [this]() {return OP_0xC3(); },
		[this]() {return OP_0xC4(); }, [this]() {return OP_0xC5(); }, 
		[this]() {return OP_0xC6(); }, [this]() {return OP_0xC7(); }, 
		[this]() {return OP_0xC8(); }, [this]() {return OP_0xC9(); }, 
		[this]() {return OP_0xCA(); }, [this]() {return OP_0xCB(); }, 
		[this]() {return OP_0xCC(); }, [this]() {return OP_0xCD(); }, 
		[this]() {return OP_0xCE(); }, [this]() {return OP_0xCF(); },

		[this]() {return OP_0xD0(); }, [this]() {return OP_0xD1(); },
		[this]() {return OP_0xD2(); }, [this]() {return OP_0xD3(); },
		[this]() {return OP_0xD4(); }, [this]() {return OP_0xD5(); }, 
		[this]() {return OP_0xD6(); }, [this]() {return OP_0xD7(); }, 
		[this]() {return OP_0xD8(); }, [this]() {return OP_0xD9(); }, 
		[this]() {return OP_0xDA(); }, [this]() {return OP_0xDB(); }, 
		[this]() {return OP_0xDC(); }, [this]() {return OP_0xDD(); }, 
		[this]() {return OP_0xDE(); }, [this]() {return OP_0xDF(); },

		[this]() {return OP_0xE0(); }, [this]() {return OP_0xE1(); },
		[this]() {return OP_0xE2(); }, [this]() {return OP_0xE3(); },
		[this]() {return OP_0xE4(); }, [this]() {return OP_0xE5(); }, 
		[this]() {return OP_0xE6(); }, [this]() {return OP_0xE7(); }, 
		[this]() {return OP_0xE8(); }, [this]() {return OP_0xE9(); }, 
		[this]() {return OP_0xEA(); }, [this]() {return OP_0xEB(); }, 
		[this]() {return OP_0xEC(); }, [this]() {return OP_0xED(); }, 
		[this]() {return OP_0xEE(); }, [this]() {return OP_0xEF(); },

		[this]() {return OP_0xF0(); }, [this]() {return OP_0xF1(); },
		[this]() {return OP_0xF2(); }, [this]() {return OP_0xF3(); },
		[this]() {return OP_0xF4(); }, [this]() {return OP_0xF5(); }, 
		[this]() {return OP_0xF6(); }, [this]() {return OP_0xF7(); }, 
		[this]() {return OP_0xF8(); }, [this]() {return OP_0xF9(); }, 
		[this]() {return OP_0xFA(); }, [this]() {return OP_0xFB(); }, 
		[this]() {return OP_0xFC(); }, [this]() {return OP_0xFD(); }, 
		[this]() {return OP_0xFE(); }, [this]() {return OP_0xFF(); },

		
	};
}

//NOP
void CPU::OP_0x00()
{

}
//LD BC, u16
void CPU::OP_0x01()
{
	BC.lower = mmu->ReadByte(programCounter);
	BC.higher = mmu->ReadByte(programCounter + 1);

	programCounter += 2;

	instructionClock = 2;
}
//LD (BC), A
void CPU::OP_0x02()
{
	mmu->WriteByte(BC.word, AF.higher);
	instructionClock = 2;
}
//INC BC
void CPU::OP_0x03()
{
	++BC.word;
	instructionClock = 2;
}
//INC B
void CPU::OP_0x04()
{
	++BC.higher;
	instructionClock = 2;
}
//DEC B
void CPU::OP_0x05()
{
	--BC.higher;
	instructionClock = 2;
}
//LD B, u8
void CPU::OP_0x06()
{
	BC.higher = mmu->ReadByte(programCounter);
	++programCounter;

	instructionClock = 2;
}
//RLCA
void CPU::OP_0x07()
{
	AF.lower = (AF.higher & 0x80) ? 0x10 : 0;
	AF.higher = (AF.higher << 1) | (AF.higher >> 7);
	instructionClock = 1;
}
//LD (u16), SP
void CPU::OP_0x08()
{
	uint16_t address = mmu->ReadWord(programCounter);
	programCounter += 2;
	mmu->WriteWord(address, stackPointer);
	instructionClock = 5;
}
//Add HL, BC
void CPU::OP_0x09()
{
	uint32_t sum = HL.word + BC.word;
	AF.lower &= 0x80;
	if (sum > 0xFFFF)
	{
		AF.lower |= 0x10;
	}
	if ((HL.word & 0xFFF) > (sum & 0xFFF))
		AF.lower |= 0x20;
	HL.word += BC.word;
	instructionClock = 2;

}
//LD A,(BC)
void CPU::OP_0x0A()
{
	AF.higher = mmu->ReadByte(BC.word);
	instructionClock = 2;
}
//DEC BC
void CPU::OP_0x0B()
{
	--BC.word;
	instructionClock = 2;
}
//INC C
void CPU::OP_0x0C()
{
	++BC.lower;
	instructionClock = 2;
}
//DEC C
void CPU::OP_0x0D()
{
	--BC.lower;
	instructionClock = 2;
}
//LD C,u8
void CPU::OP_0x0E()
{
	BC.lower = mmu->ReadByte(programCounter);
	++programCounter;

	instructionClock = 2;
}
//RRCA (Rotate right carry A)
void CPU::OP_0x0F()
{
	AF.lower = (AF.higher & 0x1) ? 0x10 : 0;
	AF.higher = (AF.higher >> 1) | ((AF.higher & 0x1) << 7);
	instructionClock = 1;
}
//STOP (pretty sure you just do nothing)
void CPU::OP_0x10()
{
	
}
//LD DE,u16 (load bytes from current instruction to DE)
void CPU::OP_0x11()
{
	DE.lower = mmu->ReadByte(programCounter);
	DE.higher = mmu->ReadByte(programCounter + 1);
	programCounter += 2;

	instructionClock = 3;
}
//LD (DE),A
void CPU::OP_0x12()
{
	mmu->WriteByte(DE.word, AF.higher);
	instructionClock = 2;
}
//INC DE
void CPU::OP_0x13()
{
	++DE.word;
	instructionClock = 2;
}
//INC D
void CPU::OP_0x14()
{
	++DE.higher;
	instructionClock = 2;
}
//DEC D
void CPU::OP_0x15()
{
	--DE.lower;
	instructionClock = 2;
}
//LD D,u8
void CPU::OP_0x16()
{
	DE.higher = mmu->ReadByte(programCounter);
	++programCounter;
	instructionClock = 2;
}
//RLA (Rotate left A)
void CPU::OP_0x17()
{
	uint8_t carry = (AF.lower & 0x10) ? 1 : 0;
	AF.lower = (AF.higher & 0x80) ? 0x10 : 0;
	AF.higher = (AF.higher << 1) | carry;

	instructionClock = 1;
}
//JR i8 (jump by assigning value to programCounter)
void CPU::OP_0x18()
{
	uint8_t value = mmu->ReadByte(programCounter);
	++programCounter;
	instructionClock = 3;

	programCounter = value;
	if (value > 127)
	{
		programCounter -= 256;
	}
	++instructionClock;
}
//ADD HL,DE
void CPU::OP_0x19()
{
	uint32_t sum = HL.word + DE.word;
	AF.lower &= 0x80;
	if (sum > 0xFFFF)
	{
		AF.lower |= 0x10;
	}
	if ((HL.word & 0xFFF) > (sum & 0xFFF))
		AF.lower |= 0x20;
	HL.word += DE.word;
	instructionClock = 2;
}
//LD A,DE
void CPU::OP_0x1A()
{
	AF.higher = mmu->ReadByte(DE.word);
	instructionClock = 2;
}
//DEC DE
void CPU::OP_0x1B()
{
	--DE.word;
	instructionClock = 2;
}
//INC E
void CPU::OP_0x1C()
{
	++DE.lower;
	instructionClock = 2;
}
//DEC E
void CPU::OP_0x1D()
{
	--DE.lower;
	instructionClock = 2;
}
//LD E,u8
void CPU::OP_0x1E()
{
	DE.lower = mmu->ReadByte(programCounter);
	++programCounter;
	instructionClock = 2;
}
//RRA (Rotate right A)
void CPU::OP_0x1F()
{
	uint8_t carry = (AF.lower & 0x10) ? 0x80 : 0;
	AF.lower = (AF.higher & 0x1) ? 0x10 : 0;
	AF.higher = (AF.higher >> 1) | carry;
	instructionClock = 1;
}
//JR NZ,i8 (jump somewhere)
void CPU::OP_0x20()
{
	uint8_t value = mmu->ReadByte(programCounter);
	++programCounter;
	instructionClock = 3;
	if (!(AF.lower & 0x80))
	{
		programCounter += value;
		if (value > 127)
			programCounter -= 256;
		++instructionClock;
	}
}
//LD HL,u16
void CPU::OP_0x21()
{
	HL.lower = mmu->ReadByte(programCounter);
	HL.higher = mmu->ReadByte(programCounter + 1);
	programCounter += 2;

	instructionClock = 3;
}
//LD (HL+),A
void CPU::OP_0x22()
{
	mmu->WriteByte(HL.word, AF.higher);
	HL.word += 1;
	instructionClock = 2;
}
//INC HL
void CPU::OP_0x23()
{
	++HL.word;
	instructionClock = 2;
}
//INC H
void CPU::OP_0x24()
{
	++HL.higher;
	instructionClock = 2;
}

void CPU::OP_0x25()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x26()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x27()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x28()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x29()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x2A()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x2B()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x2C()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x2D()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x2E()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x2F()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x30()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x31()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x32()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x33()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x34()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x35()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x36()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x37()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x38()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x39()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x3A()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x3B()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x3C()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x3D()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x3E()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x3F()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x40()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x41()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x42()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x43()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x44()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x45()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x46()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x47()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x48()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x49()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x4A()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x4B()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x4C()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x4D()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x4E()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x4F()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x50()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x51()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x52()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x53()
{
	if ((opcode & 0xCB) == 0xCB)
	{
		//CB prefixed
	}
}

void CPU::OP_0x54()
{
}

void CPU::OP_0x55()
{
}

void CPU::OP_0x56()
{
}

void CPU::OP_0x57()
{
}

void CPU::OP_0x58()
{
}

void CPU::OP_0x59()
{
}

void CPU::OP_0x5A()
{
}

void CPU::OP_0x5B()
{
}

void CPU::OP_0x5C()
{
}

void CPU::OP_0x5D()
{
}

void CPU::OP_0x5E()
{
}

void CPU::OP_0x5F()
{
}

void CPU::OP_0x60()
{
}

void CPU::OP_0x61()
{
}

void CPU::OP_0x62()
{
}

void CPU::OP_0x63()
{
}

void CPU::OP_0x64()
{
}

void CPU::OP_0x65()
{
}

void CPU::OP_0x66()
{
}

void CPU::OP_0x67()
{
}

void CPU::OP_0x68()
{
}

void CPU::OP_0x69()
{
}

void CPU::OP_0x6A()
{
}

void CPU::OP_0x6B()
{
}

void CPU::OP_0x6C()
{
}

void CPU::OP_0x6D()
{
}

void CPU::OP_0x6E()
{
}

void CPU::OP_0x6F()
{
}

void CPU::OP_0x70()
{
}

void CPU::OP_0x71()
{
}

void CPU::OP_0x72()
{
}

void CPU::OP_0x73()
{
}

void CPU::OP_0x74()
{
}

void CPU::OP_0x75()
{
}

void CPU::OP_0x76()
{
}

void CPU::OP_0x77()
{
}

void CPU::OP_0x78()
{
}

void CPU::OP_0x79()
{
}

void CPU::OP_0x7A()
{
}

void CPU::OP_0x7B()
{
}

void CPU::OP_0x7C()
{
}

void CPU::OP_0x7D()
{
}

void CPU::OP_0x7E()
{
}

void CPU::OP_0x7F()
{
}

void CPU::OP_0x80()
{
}

void CPU::OP_0x81()
{
}

void CPU::OP_0x82()
{
}

void CPU::OP_0x83()
{
}

void CPU::OP_0x84()
{
}

void CPU::OP_0x85()
{
}

void CPU::OP_0x86()
{
}

void CPU::OP_0x87()
{
}

void CPU::OP_0x88()
{
}

void CPU::OP_0x89()
{
}

void CPU::OP_0x8A()
{
}

void CPU::OP_0x8B()
{
}

void CPU::OP_0x8C()
{
}

void CPU::OP_0x8D()
{
}

void CPU::OP_0x8E()
{
}

void CPU::OP_0x8F()
{
}

void CPU::OP_0x90()
{
}

void CPU::OP_0x91()
{
}

void CPU::OP_0x92()
{
}

void CPU::OP_0x93()
{
}

void CPU::OP_0x94()
{
}

void CPU::OP_0x95()
{
}

void CPU::OP_0x96()
{
}

void CPU::OP_0x97()
{
}

void CPU::OP_0x98()
{
}

void CPU::OP_0x99()
{
}

void CPU::OP_0x9A()
{
}

void CPU::OP_0x9B()
{
}

void CPU::OP_0x9C()
{
}

void CPU::OP_0x9D()
{
}

void CPU::OP_0x9E()
{
}

void CPU::OP_0x9F()
{
}

void CPU::OP_0xA0()
{
}

void CPU::OP_0xA1()
{
}

void CPU::OP_0xA2()
{
}

void CPU::OP_0xA3()
{
}

void CPU::OP_0xA4()
{
}

void CPU::OP_0xA5()
{
}

void CPU::OP_0xA6()
{
}

void CPU::OP_0xA7()
{
}

void CPU::OP_0xA8()
{
}

void CPU::OP_0xA9()
{
}

void CPU::OP_0xAA()
{
}

void CPU::OP_0xAB()
{
}

void CPU::OP_0xAC()
{
}

void CPU::OP_0xAD()
{
}

void CPU::OP_0xAE()
{
}

void CPU::OP_0xAF()
{
}

void CPU::OP_0xB0()
{
}

void CPU::OP_0xB1()
{
}

void CPU::OP_0xB2()
{
}

void CPU::OP_0xB3()
{
}

void CPU::OP_0xB4()
{
}

void CPU::OP_0xB5()
{
}

void CPU::OP_0xB6()
{
}

void CPU::OP_0xB7()
{
}

void CPU::OP_0xB8()
{
}

void CPU::OP_0xB9()
{
}

void CPU::OP_0xBA()
{
}

void CPU::OP_0xBB()
{
}

void CPU::OP_0xBC()
{
}

void CPU::OP_0xBD()
{
}

void CPU::OP_0xBE()
{
}

void CPU::OP_0xBF()
{
}

void CPU::OP_0xC0()
{
}

void CPU::OP_0xC1()
{
}

void CPU::OP_0xC2()
{
}

void CPU::OP_0xC3()
{
}

void CPU::OP_0xC4()
{
}

void CPU::OP_0xC5()
{
}

void CPU::OP_0xC6()
{
}

void CPU::OP_0xC7()
{
}

void CPU::OP_0xC8()
{
}

void CPU::OP_0xC9()
{
}

void CPU::OP_0xCA()
{
}

void CPU::OP_0xCB()
{
}

void CPU::OP_0xCC()
{
}

void CPU::OP_0xCD()
{
}

void CPU::OP_0xCE()
{
}

void CPU::OP_0xCF()
{
}

void CPU::OP_0xD0()
{
}

void CPU::OP_0xD1()
{
}

void CPU::OP_0xD2()
{
}

void CPU::OP_0xD3()
{
}

void CPU::OP_0xD4()
{
}

void CPU::OP_0xD5()
{
}

void CPU::OP_0xD6()
{
}

void CPU::OP_0xD7()
{
}

void CPU::OP_0xD8()
{
}

void CPU::OP_0xD9()
{
}

void CPU::OP_0xDA()
{
}

void CPU::OP_0xDB()
{
}

void CPU::OP_0xDC()
{
}

void CPU::OP_0xDD()
{
}

void CPU::OP_0xDE()
{
}

void CPU::OP_0xDF()
{
}

void CPU::OP_0xE0()
{
}

void CPU::OP_0xE1()
{
}

void CPU::OP_0xE2()
{
}

void CPU::OP_0xE3()
{
}

void CPU::OP_0xE4()
{
}

void CPU::OP_0xE5()
{
}

void CPU::OP_0xE6()
{
}

void CPU::OP_0xE7()
{
}

void CPU::OP_0xE8()
{
}

void CPU::OP_0xE9()
{
}

void CPU::OP_0xEA()
{
}

void CPU::OP_0xEB()
{
}

void CPU::OP_0xEC()
{
}

void CPU::OP_0xED()
{
}

void CPU::OP_0xEE()
{
}

void CPU::OP_0xEF()
{
}

void CPU::OP_0xF0()
{
}

void CPU::OP_0xF1()
{
}

void CPU::OP_0xF2()
{
}

void CPU::OP_0xF3()
{
}

void CPU::OP_0xF4()
{
}

void CPU::OP_0xF5()
{
}

void CPU::OP_0xF6()
{
}

void CPU::OP_0xF7()
{
}

void CPU::OP_0xF8()
{
}

void CPU::OP_0xF9()
{
}

void CPU::OP_0xFA()
{
}

void CPU::OP_0xFB()
{
}

void CPU::OP_0xFC()
{
}

void CPU::OP_0xFD()
{
}

void CPU::OP_0xFE()
{
}

void CPU::OP_0xFF()
{
}
