/* Ghidra address: 00ddf580 */
/* Ghidra symbol: FUN_00ddf580 */


void FUN_00ddf580(longlong param_1)

{
  undefined8 uVar1;
  longlong local_20 [2];
  
  if ((*(longlong *)(param_1 + 0x4d8) != 0) && (*(longlong *)(param_1 + 0x468) == 0)) {
    local_20[0] = 0;
    (**(code **)(**(longlong **)(param_1 + 0x4d8) + 0x18))(*(longlong **)(param_1 + 0x4d8),local_20)
    ;
    if (local_20[0] == 0) {
      uVar1 = FUN_0044d710(&PTR_FUN_00620870,1,PTR_PTR_02005c20);
      FUN_004134c0(uVar1);
    }
    *(longlong *)(param_1 + 0x468) = local_20[0];
    uVar1 = thunk_FUN_04118143(*(undefined8 *)(param_1 + 0x468),0xfffffffc);
    *(undefined8 *)(param_1 + 0x460) = uVar1;
    *(longlong *)PTR_DAT_02003968 = param_1;
    thunk_FUN_03c9d277(*(undefined8 *)(param_1 + 0x468),0xfffffffc,FUN_00648420);
    thunk_FUN_041b2403(*(undefined8 *)(param_1 + 0x468),0,0,0);
  }
  return;
}

