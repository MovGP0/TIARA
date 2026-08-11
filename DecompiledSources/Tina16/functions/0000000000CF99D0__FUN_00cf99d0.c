/* Ghidra address: 00cf99d0 */
/* Ghidra symbol: FUN_00cf99d0 */


void FUN_00cf99d0(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined4 unaff_EBX;
  undefined1 local_118 [24];
  code *local_100;
  undefined8 local_28;
  undefined8 local_20;
  
  local_28 = 0;
  local_20 = 0;
  FUN_00cf9c40(param_1);
  cVar1 = *(char *)(param_1 + 0x20);
  if (cVar1 == '\0') {
    unaff_EBX = 1;
  }
  else if (cVar1 == '\x01') {
    unaff_EBX = 2;
  }
  else if (cVar1 == '\x02') {
    unaff_EBX = 3;
  }
  else {
    FUN_0041ddd0(&local_20,PTR_PTR_02004d90);
    uVar3 = FUN_0044d490(&PTR_FUN_00cf5f58,1,local_20);
    FUN_004134c0(uVar3);
  }
  FUN_00cf9500(*(undefined8 *)(param_1 + 8),&local_28);
  uVar3 = FUN_00416740(local_28);
  FUN_00cf8f40(DAT_01eb2478,local_118);
  uVar2 = (*local_100)(param_2,uVar3,unaff_EBX,param_3,param_4,0,0,param_1 + 0x10,param_1 + 0x28);
  FUN_00cf8f80(*DAT_01eb2478,uVar2,L"AcquireCredentialsHandleW");
  *(undefined1 *)(param_1 + 0x21) = 1;
  FUN_00414560(&local_28,2);
  return;
}

