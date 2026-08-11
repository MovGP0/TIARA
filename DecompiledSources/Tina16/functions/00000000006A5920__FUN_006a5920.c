/* Ghidra address: 006a5920 */
/* Ghidra symbol: FUN_006a5920 */


void FUN_006a5920(longlong *param_1,undefined8 param_2)

{
  char cVar1;
  undefined8 uVar2;
  undefined1 auStack_68 [40];
  undefined1 *local_40;
  undefined8 local_30;
  short local_22;
  undefined8 local_20;
  
  local_40 = auStack_68;
  (**(code **)(*param_1 + 0x30))(param_1);
  local_22 = thunk_FUN_03a59683(0);
  while( true ) {
    if (local_22 == 0) {
      uVar2 = FUN_0044d710(&PTR_FUN_006a50b8,1,PTR_PTR_020020d8);
      FUN_004134c0(uVar2);
      (**(code **)(*param_1 + 0x28))(param_1);
      return;
    }
    cVar1 = FUN_00604960(&DAT_005f7500,local_22);
    if (cVar1 != '\0') break;
    local_22 = thunk_FUN_03a59683(local_22);
  }
  local_20 = thunk_FUN_0413b85d(local_22);
  local_30 = thunk_FUN_0413b85d(9);
  FUN_00604800(param_2,local_22,local_20,local_30);
  FUN_006a5a00(0,local_40);
  return;
}

