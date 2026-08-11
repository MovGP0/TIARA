/* Ghidra address: 00c220d0 */
/* Ghidra symbol: FUN_00c220d0 */


void FUN_00c220d0(undefined1 *param_1,int param_2,char param_3)

{
  undefined8 uVar1;
  undefined1 *puVar2;
  undefined2 local_41c;
  short local_41a;
  undefined1 local_418 [80];
  undefined1 local_3c8 [952];
  
  if (param_3 == '\0') {
    puVar2 = local_418;
    local_41a = (short)param_2;
  }
  else {
    if (0xec < param_2) {
      param_2 = 0xec;
    }
    uVar1 = thunk_FUN_041715dd(0xf);
    thunk_FUN_041a3f2d(uVar1,0,0x14,local_418);
    puVar2 = local_3c8;
    local_41a = (short)param_2 + 0x14;
  }
  local_41c = 0x300;
  for (; 0 < param_2; param_2 = param_2 + -1) {
    *puVar2 = param_1[2];
    puVar2[1] = param_1[1];
    puVar2[2] = *param_1;
    puVar2[3] = param_1[3];
    puVar2 = puVar2 + 4;
    param_1 = param_1 + 4;
  }
  thunk_FUN_04123694(&local_41c);
  return;
}

