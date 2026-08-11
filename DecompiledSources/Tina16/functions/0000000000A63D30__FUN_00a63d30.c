/* Ghidra address: 00a63d30 */
/* Ghidra symbol: FUN_00a63d30 */


undefined1 FUN_00a63d30(undefined8 param_1,undefined8 param_2,char *param_3)

{
  int iVar1;
  char cVar2;
  undefined8 *puVar3;
  undefined8 local_res10 [3];
  undefined1 local_19;
  
  local_res10[0] = param_2;
  FUN_00414610(param_2);
  cVar2 = 'C';
  puVar3 = (undefined8 *)(PTR_PTR_02002b50 + 0x218);
  do {
    iVar1 = FUN_00416db0(local_res10[0],*puVar3);
    if (iVar1 == 0) {
      local_19 = 1;
      *param_3 = cVar2;
      goto LAB_00a63d8c;
    }
    cVar2 = cVar2 + '\x01';
    puVar3 = puVar3 + 1;
  } while (cVar2 != 'Q');
  local_19 = 0;
LAB_00a63d8c:
  FUN_00414480(local_res10);
  return local_19;
}

