/* Ghidra address: 006df400 */
/* Ghidra symbol: FUN_006df400 */


void FUN_006df400(longlong param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 char param_5)

{
  undefined8 uVar1;
  longlong lVar2;
  undefined8 *puVar3;
  undefined8 local_88;
  undefined8 local_80;
  undefined8 local_78 [10];
  
  FUN_006dfe80(param_1);
  if (param_5 == '\0') {
    local_80 = 0xffffffffffff0001;
  }
  else if (param_5 == '\x01') {
    local_80 = 0xffffffffffff0002;
  }
  else if (param_5 == '\x02') {
    local_80 = param_3;
  }
  puVar3 = local_78;
  for (lVar2 = 7; lVar2 != 0; lVar2 = lVar2 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  local_88 = param_2;
  FUN_00742eb0(*(undefined8 *)(*(longlong *)(param_1 + 8) + 0x6d8),0);
  uVar1 = FUN_006decf0(param_1);
  thunk_FUN_041b2403(uVar1,0x1132,0,&local_88);
  return;
}

