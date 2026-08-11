/* Ghidra address: 00b74cf0 */
/* Ghidra symbol: FUN_00b74cf0 */


undefined8 FUN_00b74cf0(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint7 uVar6;
  undefined8 uVar5;
  undefined1 local_38 [24];
  
  FUN_0040d200(local_38,0x10,0);
  plVar4 = (longlong *)FUN_00b6cfe0(&PTR_FUN_00b74688,1,0);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e8d970,0x80,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e8d980,local_38);
  uVar3 = FUN_0043e2c0(local_38,&DAT_01e8d990,8);
  (**(code **)(*plVar4 + 0x118))(plVar4,local_38,local_38);
  if ((char)uVar3 == '\0') {
LAB_00b74d9d:
    bVar1 = false;
    uVar6 = 0;
  }
  else {
    cVar2 = FUN_0043e2c0(local_38,&DAT_01e8d980,0x10);
    if (cVar2 == '\0') goto LAB_00b74d9d;
    uVar6 = (uint7)(uint3)((uint)uVar3 >> 8);
    bVar1 = true;
  }
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e8d9a0,0xc0,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e8d9b8,local_38);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_38,&DAT_01e8d9c8,8);
    if (cVar2 == '\0') goto LAB_00b74e00;
    bVar1 = true;
  }
  else {
LAB_00b74e00:
    bVar1 = false;
    uVar6 = 0;
  }
  (**(code **)(*plVar4 + 0x118))(plVar4,local_38,local_38);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_38,&DAT_01e8d9b8,0x10);
    if (cVar2 == '\0') goto LAB_00b74e38;
    bVar1 = true;
  }
  else {
LAB_00b74e38:
    bVar1 = false;
    uVar6 = 0;
  }
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e8d9d8,0x100,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e8d9f8,local_38);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_38,&DAT_01e8da08,8);
    if (cVar2 == '\0') goto LAB_00b74e9b;
    bVar1 = true;
  }
  else {
LAB_00b74e9b:
    bVar1 = false;
    uVar6 = 0;
  }
  (**(code **)(*plVar4 + 0x118))(plVar4,local_38,local_38);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_38,&DAT_01e8d9f8,0x10);
    if (cVar2 != '\0') {
      uVar5 = CONCAT71(uVar6,1);
      goto LAB_00b74ed9;
    }
  }
  uVar5 = 0;
LAB_00b74ed9:
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  FUN_00410f20(plVar4);
  return uVar5;
}

