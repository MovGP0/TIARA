/* Ghidra address: 019ae9f0 */
/* Ghidra symbol: FUN_019ae9f0 */


char FUN_019ae9f0(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 *param_4)

{
  char cVar1;
  undefined4 *puVar2;
  longlong lVar3;
  undefined8 local_20 [2];
  
  local_20[0] = 0;
  puVar2 = (undefined4 *)FUN_004095c0(0x10);
  *puVar2 = param_2;
  FUN_00414480(param_3);
  cVar1 = FUN_01b1c9b0(*(undefined8 *)(param_1 + 0x418),puVar2,FUN_019ae880,param_4);
  if (cVar1 != '\0') {
    lVar3 = FUN_004aeac0(*(undefined8 *)(param_1 + 0x418),*param_4);
    FUN_004b3880(*(undefined8 *)(lVar3 + 8),local_20);
    FUN_00414ad0(param_3,local_20[0]);
  }
  FUN_004095f0(puVar2);
  FUN_00414480(local_20);
  return cVar1;
}

