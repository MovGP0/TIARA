/* Ghidra address: 00b7e620 */
/* Ghidra symbol: FUN_00b7e620 */


undefined8 FUN_00b7e620(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint7 uVar6;
  undefined8 uVar5;
  undefined1 local_30 [16];
  
  FUN_0040d200(local_30,8,0);
  plVar4 = (longlong *)FUN_00b6cfe0(&PTR_FUN_00b7e178,1,0);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e90250,0x80,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e90260,local_30);
  uVar3 = FUN_0043e2c0(local_30,&DAT_01e90268,8);
  (**(code **)(*plVar4 + 0x118))(plVar4,local_30,local_30);
  if ((char)uVar3 == '\0') {
LAB_00b7e6cd:
    bVar1 = false;
    uVar6 = 0;
  }
  else {
    cVar2 = FUN_0043e2c0(local_30,&DAT_01e90260,8);
    if (cVar2 == '\0') goto LAB_00b7e6cd;
    uVar6 = (uint7)(uint3)((uint)uVar3 >> 8);
    bVar1 = true;
  }
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e90270,0x80,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e90280,local_30);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_30,&DAT_01e90288,8);
    if (cVar2 == '\0') goto LAB_00b7e730;
    bVar1 = true;
  }
  else {
LAB_00b7e730:
    bVar1 = false;
    uVar6 = 0;
  }
  (**(code **)(*plVar4 + 0x118))(plVar4,local_30,local_30);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_30,&DAT_01e90280,8);
    if (cVar2 != '\0') {
      uVar5 = CONCAT71(uVar6,1);
      goto LAB_00b7e76e;
    }
  }
  uVar5 = 0;
LAB_00b7e76e:
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  FUN_00410f20(plVar4);
  return uVar5;
}

