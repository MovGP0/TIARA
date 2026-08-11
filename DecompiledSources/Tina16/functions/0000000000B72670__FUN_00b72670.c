/* Ghidra address: 00b72670 */
/* Ghidra symbol: FUN_00b72670 */


undefined8 FUN_00b72670(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint7 uVar6;
  undefined8 uVar5;
  undefined1 local_30 [16];
  
  FUN_0040d200(local_30,8,0);
  plVar4 = (longlong *)FUN_00b6cfe0(&PTR_FUN_00b721c8,1,0);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e8c8dc,0x80,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e8c8ec,local_30);
  uVar3 = FUN_0043e2c0(local_30,&DAT_01e8c8f4,8);
  (**(code **)(*plVar4 + 0x118))(plVar4,local_30,local_30);
  if ((char)uVar3 == '\0') {
LAB_00b7271d:
    bVar1 = false;
    uVar6 = 0;
  }
  else {
    cVar2 = FUN_0043e2c0(local_30,&DAT_01e8c8ec,8);
    if (cVar2 == '\0') goto LAB_00b7271d;
    uVar6 = (uint7)(uint3)((uint)uVar3 >> 8);
    bVar1 = true;
  }
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e8c8dc,0x50,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e8c8ec,local_30);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_30,&DAT_01e8c8fc,8);
    if (cVar2 == '\0') goto LAB_00b72780;
    bVar1 = true;
  }
  else {
LAB_00b72780:
    bVar1 = false;
    uVar6 = 0;
  }
  (**(code **)(*plVar4 + 0x118))(plVar4,local_30,local_30);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_30,&DAT_01e8c8ec,8);
    if (cVar2 == '\0') goto LAB_00b727b8;
    bVar1 = true;
  }
  else {
LAB_00b727b8:
    bVar1 = false;
    uVar6 = 0;
  }
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e8c8dc,0x28,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e8c8ec,local_30);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_30,&DAT_01e8c904,8);
    if (cVar2 == '\0') goto LAB_00b7281b;
    bVar1 = true;
  }
  else {
LAB_00b7281b:
    bVar1 = false;
    uVar6 = 0;
  }
  (**(code **)(*plVar4 + 0x118))(plVar4,local_30,local_30);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_30,&DAT_01e8c8ec,8);
    if (cVar2 != '\0') {
      uVar5 = CONCAT71(uVar6,1);
      goto LAB_00b72859;
    }
  }
  uVar5 = 0;
LAB_00b72859:
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  FUN_00410f20(plVar4);
  return uVar5;
}

