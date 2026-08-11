/* Ghidra address: 012cce60 */
/* Ghidra symbol: FUN_012cce60 */


void FUN_012cce60(longlong param_1,undefined8 param_2,undefined1 param_3)

{
  int iVar1;
  longlong lVar2;
  undefined8 local_res10 [3];
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  iVar1 = (**(code **)(**(longlong **)(param_1 + 0x738) + 0xb0))
                    (*(longlong **)(param_1 + 0x738),local_res10[0]);
  if (-1 < iVar1) {
    lVar2 = FUN_006efcb0(*(undefined8 *)(*(longlong *)(param_1 + 0x6e0) + 0x4e0),iVar1);
    FUN_006e6920(*(undefined8 *)(lVar2 + 0x40),param_3);
  }
  FUN_00414480(local_res10);
  return;
}

