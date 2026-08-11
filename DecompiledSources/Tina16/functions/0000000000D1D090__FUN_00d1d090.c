/* Ghidra address: 00d1d090 */
/* Ghidra symbol: FUN_00d1d090 */


void FUN_00d1d090(void)

{
  int iVar1;
  
  DAT_0201a0cc = DAT_0201a0cc + -1;
  if (DAT_0201a0cc == -1) {
    iVar1 = FUN_00cd71d0();
    if (iVar1 < 4) {
      PTR_FUN_01ebb7d0 = FUN_00d18370;
    }
    else {
      PTR_FUN_01ebb7d0 = FUN_00d18380;
    }
    FUN_0041b5a0(FUN_00d1cf30);
    FUN_00d0ccb0(&PTR_FUN_00d08d70,"Message Digest 4",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d090a8,"Message Digest 5",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d09978,"Secure Hash Algorithm",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d09b58,"Secure Hash Algorithm 1",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d09228,"Ripe Message Digest 128",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d093b8,"Ripe Message Digest 160",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d09590,"Ripe Message Digest 256",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d097a0,"Ripe Message Digest 320",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d0a628,"Haval-128",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d0a458,"Haval-160",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d0a288,"Haval-192",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d0a0b8,"Haval-224",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d09d18,"Haval-256",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d0baf8,"Sapphire II-128",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d0b928,"Sapphire II-160",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d0b758,"Sapphire II-192",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d0b588,"Sapphire II-224",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d0b3b8,"Sapphire II-256",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d0b1e8,"Sapphire II-288",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d0ae38,"Sapphire II-320",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d0a7f8,"Snefru-256",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d0bcc8,"Square",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d0ab90,"Tiger",&DAT_00d1d3e8);
    FUN_00d0ccb0(&PTR_FUN_00d0c170,"XOR-16","Checksum");
    FUN_00d0ccb0(&PTR_FUN_00d0c430,"XOR-32","Checksum");
    FUN_00d0ccb0(&PTR_FUN_00d0c948,"CRC-16 CCITT","Checksum");
    FUN_00d0ccb0(&PTR_FUN_00d0cb70,"CRC-16 Standard","Checksum");
    FUN_00d0ccb0(&PTR_FUN_00d0c6f0,"CRC-32","Checksum");
  }
  return;
}

