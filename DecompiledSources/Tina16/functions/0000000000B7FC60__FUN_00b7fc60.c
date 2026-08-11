/* Ghidra address: 00b7fc60 */
/* Ghidra symbol: FUN_00b7fc60 */


undefined8 FUN_00b7fc60(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  uint7 uVar6;
  undefined8 uVar5;
  undefined1 local_38 [24];
  
  FUN_0040d200(local_38,0x10,0);
  plVar4 = (longlong *)FUN_00b6cfe0(&PTR_FUN_00b7f7c8,1,0);
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e93728,0x80,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e93738,local_38);
  uVar3 = FUN_0043e2c0(local_38,&DAT_01e93748,0x10);
  (**(code **)(*plVar4 + 0x118))(plVar4,local_38,local_38);
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  if ((char)uVar3 == '\0') {
LAB_00b7fd19:
    bVar1 = false;
    uVar6 = 0;
  }
  else {
    cVar2 = FUN_0043e2c0(local_38,&DAT_01e93738,0x10);
    if (cVar2 == '\0') goto LAB_00b7fd19;
    uVar6 = (uint7)(uint3)((uint)uVar3 >> 8);
    bVar1 = true;
  }
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e93758,0xc0,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e93770,local_38);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_38,&DAT_01e93780,0x10);
    if (cVar2 == '\0') goto LAB_00b7fd70;
    bVar1 = true;
  }
  else {
LAB_00b7fd70:
    bVar1 = false;
    uVar6 = 0;
  }
  (**(code **)(*plVar4 + 0x118))(plVar4,local_38,local_38);
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_38,&DAT_01e93770,0x10);
    if (cVar2 == '\0') goto LAB_00b7fdb4;
    bVar1 = true;
  }
  else {
LAB_00b7fdb4:
    bVar1 = false;
    uVar6 = 0;
  }
  (**(code **)(*plVar4 + 0xa8))(plVar4,&DAT_01e93790,0x100,0);
  (**(code **)(*plVar4 + 0x110))(plVar4,&DAT_01e937b0,local_38);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_38,&DAT_01e937c0,0x10);
    if (cVar2 == '\0') goto LAB_00b7fe0b;
    bVar1 = true;
  }
  else {
LAB_00b7fe0b:
    bVar1 = false;
    uVar6 = 0;
  }
  (**(code **)(*plVar4 + 0x118))(plVar4,local_38,local_38);
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_38,&DAT_01e937b0,0x10);
    if (cVar2 != '\0') {
      uVar5 = CONCAT71(uVar6,1);
      goto LAB_00b7fe55;
    }
  }
  uVar5 = 0;
LAB_00b7fe55:
  FUN_00410f20(plVar4);
  return uVar5;
}

