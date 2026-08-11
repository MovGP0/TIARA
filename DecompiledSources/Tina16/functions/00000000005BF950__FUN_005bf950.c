/* Ghidra address: 005bf950 */
/* Ghidra symbol: FUN_005bf950 */


void FUN_005bf950(undefined8 param_1,undefined8 param_2,longlong *param_3,longlong *param_4,
                 undefined1 *param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  undefined1 local_38 [16];
  longlong local_28;
  longlong local_20;
  
  FUN_00417580(local_38,&DAT_005bc4e0);
  uVar2 = FUN_005bba20(param_2);
  FUN_005bfa10(param_1,local_38,uVar2);
  *param_4 = local_20 - local_28;
  *param_3 = local_28;
  uVar1 = FUN_005bff80(param_1,param_2,local_38);
  *param_5 = uVar1;
  FUN_00417740(local_38,&DAT_005bc4e0);
  return;
}

