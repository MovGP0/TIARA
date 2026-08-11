/* Ghidra address: 00b79870 */
/* Ghidra symbol: FUN_00b79870 */


undefined8 FUN_00b79870(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint7 uVar6;
  undefined8 uVar5;
  undefined1 local_38 [24];
  
  FUN_0040d200(local_38,0x10,0);
  plVar4 = (longlong *)FUN_00b6cfe0(&PTR_FUN_00b793c8,1,0);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e8f5c0,0x80,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e8f608,local_38);
  uVar3 = FUN_0043e2c0(&DAT_01e8f638,local_38,0x10);
  (**(code **)(*plVar4 + 0x118))(plVar4,local_38,local_38);
  if ((char)uVar3 == '\0') {
LAB_00b7991d:
    bVar1 = false;
    uVar6 = 0;
  }
  else {
    cVar2 = FUN_0043e2c0(&DAT_01e8f608,local_38,0x10);
    if (cVar2 == '\0') goto LAB_00b7991d;
    uVar6 = (uint7)(uint3)((uint)uVar3 >> 8);
    bVar1 = true;
  }
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e8f5d0,0xc0,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e8f618,local_38);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(&DAT_01e8f648,local_38,0x10);
    if (cVar2 == '\0') goto LAB_00b79980;
    bVar1 = true;
  }
  else {
LAB_00b79980:
    bVar1 = false;
    uVar6 = 0;
  }
  (**(code **)(*plVar4 + 0x118))(plVar4,local_38,local_38);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(&DAT_01e8f618,local_38,0x10);
    if (cVar2 == '\0') goto LAB_00b799b8;
    bVar1 = true;
  }
  else {
LAB_00b799b8:
    bVar1 = false;
    uVar6 = 0;
  }
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e8f5e8,0x100,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e8f628,local_38);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(&DAT_01e8f658,local_38,0x10);
    if (cVar2 == '\0') goto LAB_00b79a1b;
    bVar1 = true;
  }
  else {
LAB_00b79a1b:
    bVar1 = false;
    uVar6 = 0;
  }
  (**(code **)(*plVar4 + 0x118))(plVar4,local_38,local_38);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(&DAT_01e8f628,local_38,0x10);
    if (cVar2 != '\0') {
      uVar5 = CONCAT71(uVar6,1);
      goto LAB_00b79a59;
    }
  }
  uVar5 = 0;
LAB_00b79a59:
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  FUN_00410f20(plVar4);
  return uVar5;
}

