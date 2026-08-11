/* Ghidra address: 006d72f0 */
/* Ghidra symbol: FUN_006d72f0 */


void FUN_006d72f0(undefined8 param_1,longlong param_2,undefined4 param_3,undefined4 param_4,
                 undefined1 param_5,undefined8 param_6)

{
  undefined8 uVar1;
  code *pcVar2;
  undefined8 local_38;
  undefined8 uStack_30;
  
  uVar1 = FUN_0065b870(param_1);
  thunk_FUN_03e49910(uVar1,&local_38);
  *(undefined8 *)(param_2 + 0x60) = local_38;
  *(undefined8 *)(param_2 + 0x68) = uStack_30;
  pcVar2 = (code *)FUN_00411550(param_1,0xffc0);
  (*pcVar2)(param_1,param_2,param_3,param_4,param_5,param_6);
  return;
}

