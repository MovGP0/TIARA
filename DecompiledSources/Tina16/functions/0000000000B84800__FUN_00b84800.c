/* Ghidra address: 00b84800 */
/* Ghidra symbol: FUN_00b84800 */


undefined8 FUN_00b84800(void)

{
  bool bVar1;
  char cVar2;
  undefined4 uVar3;
  longlong *plVar4;
  int iVar5;
  uint7 uVar7;
  undefined8 uVar6;
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  undefined1 local_38 [16];
  
  plVar4 = (longlong *)FUN_00b864e0(&PTR_FUN_00b84328,1,0);
  FUN_0040d200(local_48,0x20,0);
  FUN_0040d200(local_58,0x10,0);
  iVar5 = 0x31;
  do {
    (**(code **)(*plVar4 + 0xa8))(plVar4,local_48,0x80,0);
    FUN_00409a70(local_58,local_48,0x10);
    (**(code **)(*plVar4 + 0x110))(plVar4,local_58,local_58);
    (**(code **)(*plVar4 + 0xb0))(plVar4);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  uVar3 = FUN_0043e2c0(local_58,&DAT_01e93bc0,0x10);
  FUN_0040d200(local_48,0x20,0);
  FUN_0040d200(local_58,0x10,0);
  iVar5 = 0x31;
  do {
    (**(code **)(*plVar4 + 0xa8))(plVar4,local_48,0xc0,0);
    FUN_00409a70(local_48,local_38,8);
    FUN_00409a70(local_58,local_48,0x10);
    (**(code **)(*plVar4 + 0x110))(plVar4,local_58,local_58);
    (**(code **)(*plVar4 + 0xb0))(plVar4);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if ((char)uVar3 == '\0') {
LAB_00b84963:
    bVar1 = false;
    uVar7 = 0;
  }
  else {
    cVar2 = FUN_0043e2c0(local_58,&DAT_01e93bd0,0x10);
    if (cVar2 == '\0') goto LAB_00b84963;
    uVar7 = (uint7)(uint3)((uint)uVar3 >> 8);
    bVar1 = true;
  }
  FUN_0040d200(local_48,0x20,0);
  FUN_0040d200(local_58,0x10,0);
  iVar5 = 0x31;
  do {
    (**(code **)(*plVar4 + 0xa8))(plVar4,local_48,0x100,0);
    FUN_00409a70(local_48,local_38,0x10);
    FUN_00409a70(local_58,local_48,0x10);
    (**(code **)(*plVar4 + 0x110))(plVar4,local_58,local_58);
    (**(code **)(*plVar4 + 0xb0))(plVar4);
    iVar5 = iVar5 + -1;
  } while (iVar5 != 0);
  if (bVar1) {
    cVar2 = FUN_0043e2c0(local_58,&DAT_01e93be0,0x10);
    if (cVar2 != '\0') {
      uVar6 = CONCAT71(uVar7,1);
      goto LAB_00b84a1e;
    }
  }
  uVar6 = 0;
LAB_00b84a1e:
  (**(code **)(*plVar4 + 0xb0))(plVar4);
  FUN_00410f20(plVar4);
  return uVar6;
}

