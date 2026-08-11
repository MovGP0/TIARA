/* Ghidra address: 01085110 */
/* Ghidra symbol: FUN_01085110 */


void FUN_01085110(longlong param_1,undefined8 param_2,int param_3)

{
  longlong *plVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 local_res10 [3];
  undefined8 local_28;
  undefined8 local_20 [2];
  
  local_28 = 0;
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar2 = FUN_010b13a0(*(undefined8 *)(param_1 + 0xac8),local_res10[0],local_20,0);
  if (cVar2 != '\0') {
    uVar3 = FUN_010af3b0(local_20[0]);
    plVar1 = *(longlong **)(*(longlong *)(param_1 + 0xa78) + 0x4e8);
    (**(code **)(*plVar1 + 0x10))(plVar1,uVar3);
    *(undefined1 *)(param_1 + 0xb50) = 1;
    FUN_01084e70(param_1,local_res10[0]);
    FUN_01084fc0(param_1,local_res10[0]);
    *(undefined1 *)(param_1 + 0xb50) = 0;
    FUN_00c0dad0(*(undefined8 *)(param_1 + 0xa78),0);
    if (-1 < param_3) {
      FUN_00bfcc50(*(longlong *)(param_1 + 0xa78),
                   param_3 - *(int *)(*(longlong *)(param_1 + 0xa78) + 0x508) / 2);
    }
  }
  FUN_00414480(&local_28);
  FUN_00414480(local_res10);
  return;
}

