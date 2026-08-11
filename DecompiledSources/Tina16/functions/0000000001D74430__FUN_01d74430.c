/* Ghidra address: 01d74430 */
/* Ghidra symbol: FUN_01d74430 */


void FUN_01d74430(undefined8 param_1,longlong param_2,longlong param_3,undefined4 param_4,
                 undefined1 param_5,char param_6,undefined1 param_7)

{
  longlong lVar1;
  double *pdVar2;
  undefined8 *puVar3;
  double dVar4;
  byte local_f9;
  undefined8 local_f8 [16];
  double local_78 [10];
  
  dVar4 = (double)FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),param_4,param_5,0);
  FUN_01d742b0(dVar4,*(undefined8 *)(param_3 + 0x18),*(undefined8 *)(param_3 + 0x20),local_f8,
               local_78);
  local_f9 = '\0';
  pdVar2 = local_78;
  do {
    FUN_016ed220(param_1,param_6 + local_f9,*pdVar2,0);
    local_f9 = local_f9 + '\x01';
    pdVar2 = pdVar2 + 1;
  } while (local_f9 != '\b');
  local_f9 = 0;
  puVar3 = local_f8;
  pdVar2 = local_78;
  do {
    lVar1 = *(longlong *)(param_3 + 0x28 + (ulonglong)local_f9 * 0x2f8);
    (**(code **)(*(longlong *)(lVar1 + 8) + 0x10))
              (lVar1,param_1,param_2,*puVar3,*pdVar2 * dVar4,param_7,2,2);
    local_f9 = local_f9 + 1;
    pdVar2 = pdVar2 + 1;
    puVar3 = puVar3 + 1;
  } while (local_f9 != 8);
  return;
}

