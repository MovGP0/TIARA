/* Ghidra address: 015dd9c0 */
/* Ghidra symbol: FUN_015dd9c0 */


void FUN_015dd9c0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined4 param_4,
                 undefined8 param_5)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  puVar1 = (undefined8 *)FUN_004ba3c0(&PTR_FUN_0047d288,1,param_3);
  uVar2 = (**(code **)*puVar1)(puVar1);
  FUN_015dd390(param_1,param_2,puVar1,0,1,0,uVar2,param_4,param_5);
  return;
}

