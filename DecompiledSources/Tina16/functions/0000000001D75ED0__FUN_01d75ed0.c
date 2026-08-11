/* Ghidra address: 01d75ed0 */
/* Ghidra symbol: FUN_01d75ed0 */


void FUN_01d75ed0(undefined8 param_1,longlong param_2,undefined8 param_3,undefined8 param_4,
                 char param_5,undefined1 param_6,longlong param_7)

{
  longlong lVar1;
  double *pdVar2;
  undefined8 *puVar3;
  char cVar4;
  double dVar5;
  byte local_9a1;
  undefined8 local_998 [200];
  double local_358 [102];
  
  dVar5 = (double)FUN_016ee810(param_1,*(undefined8 *)(param_2 + 0x118),param_3,param_4,0);
  FUN_01d75d20(dVar5,*(undefined8 *)(param_7 + 0x18),*(undefined8 *)(param_7 + 0x20),local_998,
               local_358,*(undefined4 *)(param_7 + 0x12908));
  cVar4 = *(char *)(param_7 + 0x12908);
  local_9a1 = '\0';
  pdVar2 = local_358;
  do {
    FUN_016ed220(param_1,param_5 + local_9a1,*pdVar2,0);
    local_9a1 = local_9a1 + '\x01';
    pdVar2 = pdVar2 + 1;
    cVar4 = cVar4 + -1;
  } while (cVar4 != '\0');
  cVar4 = *(char *)(param_7 + 0x12908);
  local_9a1 = 0;
  puVar3 = local_998;
  pdVar2 = local_358;
  do {
    lVar1 = *(longlong *)(param_7 + 0x28 + (ulonglong)local_9a1 * 0x2f8);
    (**(code **)(*(longlong *)(lVar1 + 8) + 0x10))
              (lVar1,param_1,param_2,*puVar3,*pdVar2 * dVar5,param_6,2,2);
    local_9a1 = local_9a1 + 1;
    pdVar2 = pdVar2 + 1;
    puVar3 = puVar3 + 1;
    cVar4 = cVar4 + -1;
  } while (cVar4 != '\0');
  return;
}

