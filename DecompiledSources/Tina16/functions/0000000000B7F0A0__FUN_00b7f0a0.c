/* Ghidra address: 00b7f0a0 */
/* Ghidra symbol: FUN_00b7f0a0 */


undefined8 FUN_00b7f0a0(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint7 uVar6;
  undefined8 uVar5;
  undefined1 local_38 [24];
  
  FUN_0040d200(local_38,0x10,0);
  plVar4 = (longlong *)FUN_00b6cfe0(&PTR_FUN_00b7ebf8,1,0);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e903d0,0x80,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e903e0,local_38);
  uVar3 = FUN_0043e2c0(local_38,&DAT_01e903f0,0x10);
  (**(code **)(*plVar4 + 0x118))(plVar4,local_38,local_38);
  if ((char)uVar3 == '\0') {
LAB_00b7f14d:
    bVar1 = false;
    uVar6 = 0;
  }
  else {
    cVar2 = FUN_0043e2c0(local_38,&DAT_01e903e0,0x10);
    if (cVar2 == '\0') goto LAB_00b7f14d;
    uVar6 = (uint7)(uint3)((uint)uVar3 >> 8);
    bVar1 = true;
  }
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e90400,0x100,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e90420,local_38);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_38,&DAT_01e90430,0x10);
    if (cVar2 == '\0') goto LAB_00b7f1b0;
    bVar1 = true;
  }
  else {
LAB_00b7f1b0:
    bVar1 = false;
    uVar6 = 0;
  }
  (**(code **)(*plVar4 + 0x118))(plVar4,local_38,local_38);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_38,&DAT_01e90420,0x10);
    if (cVar2 != '\0') {
      uVar5 = CONCAT71(uVar6,1);
      goto LAB_00b7f1ee;
    }
  }
  uVar5 = 0;
LAB_00b7f1ee:
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  FUN_00410f20(plVar4);
  return uVar5;
}

