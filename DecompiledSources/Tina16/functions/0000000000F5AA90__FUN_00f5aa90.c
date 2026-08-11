/* Ghidra address: 00f5aa90 */
/* Ghidra symbol: FUN_00f5aa90 */


void FUN_00f5aa90(undefined8 param_1,undefined8 param_2)

{
  char cVar1;
  ushort uVar2;
  undefined4 uVar3;
  char *pcVar4;
  short sVar5;
  short unaff_R13W;
  char local_60 [16];
  undefined1 *local_50 [5];
  
  uVar3 = FUN_016eaa90(param_1,1);
  uVar2 = FUN_016ebd90(param_1);
  if (uVar2 < 0x46a) {
    if (uVar2 == 0x469) {
      unaff_R13W = 5;
    }
    else if (uVar2 == 0x463) {
      unaff_R13W = 4;
    }
    else if (uVar2 == 0x467) {
      unaff_R13W = 2;
    }
    else if (uVar2 == 0x468) {
      unaff_R13W = 3;
    }
  }
  else if (uVar2 == 0x46a) {
    unaff_R13W = 6;
  }
  else if (uVar2 == 0x46b) {
    unaff_R13W = 7;
  }
  else if (uVar2 == 0x46c) {
    unaff_R13W = 8;
  }
  sVar5 = unaff_R13W * 2;
  cVar1 = '\x01';
  if (0 < sVar5) {
    pcVar4 = local_60;
    do {
      *pcVar4 = cVar1;
      cVar1 = cVar1 + '\x01';
      pcVar4 = pcVar4 + 1;
      sVar5 = sVar5 + -1;
    } while (sVar5 != 0);
  }
  FUN_016ee260(param_1,local_50,0x88,0);
  *local_50[0] = (char)unaff_R13W;
  FUN_00f55b30(param_1,param_2,local_60,uVar3,0x41cdcd6500000000,0x3f847ae147ae147b,local_50[0]);
  FUN_016e9f40(param_1,FUN_00f5aa40);
  return;
}

