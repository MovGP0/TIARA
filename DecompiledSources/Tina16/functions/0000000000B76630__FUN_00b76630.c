/* Ghidra address: 00b76630 */
/* Ghidra symbol: FUN_00b76630 */


undefined8 FUN_00b76630(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint7 uVar6;
  undefined8 uVar5;
  undefined1 local_30 [16];
  
  FUN_0040d200(local_30,8,0);
  plVar4 = (longlong *)FUN_00b6cfe0(&PTR_FUN_00b761c8,1,0);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e8eaa4,0x100,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e8eac4,local_30);
  uVar3 = FUN_0043e2c0(local_30,&DAT_01e8eacc,8);
  (**(code **)(*plVar4 + 0x118))(plVar4,local_30,local_30);
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  if ((char)uVar3 == '\0') {
LAB_00b766e9:
    bVar1 = false;
    uVar6 = 0;
  }
  else {
    cVar2 = FUN_0043e2c0(local_30,&DAT_01e8eac4,8);
    if (cVar2 == '\0') goto LAB_00b766e9;
    uVar6 = (uint7)(uint3)((uint)uVar3 >> 8);
    bVar1 = true;
  }
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e8ead4,0x100,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e8eaf4,local_30);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_30,&DAT_01e8eafc,8);
    if (cVar2 == '\0') goto LAB_00b76740;
    bVar1 = true;
  }
  else {
LAB_00b76740:
    bVar1 = false;
    uVar6 = 0;
  }
  (**(code **)(*plVar4 + 0x118))(plVar4,local_30,local_30);
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_30,&DAT_01e8eaf4,8);
    if (cVar2 != '\0') {
      uVar5 = CONCAT71(uVar6,1);
      goto LAB_00b7678a;
    }
  }
  uVar5 = 0;
LAB_00b7678a:
  FUN_00410f20(plVar4);
  return uVar5;
}

