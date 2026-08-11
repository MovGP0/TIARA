/* Ghidra address: 00ef69b0 */
/* Ghidra symbol: FUN_00ef69b0 */


void FUN_00ef69b0(undefined8 param_1,undefined8 *param_2,undefined2 param_3,undefined8 param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined2 local_80;
  undefined2 local_7e;
  undefined2 local_7c;
  undefined2 local_74;
  undefined2 local_72;
  undefined2 local_70;
  undefined8 local_68 [10];
  
  puVar2 = local_68;
  for (lVar1 = 10; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_2;
    param_2 = param_2 + 1;
    puVar2 = puVar2 + 1;
  }
  local_74 = 2;
  local_72 = 5;
  local_80 = 2;
  local_7e = 5;
  local_7c = 9;
  local_70 = param_3;
  FUN_00ef62c0(param_1,local_68,&local_80,&local_80,&local_74,&local_80,param_4);
  return;
}

