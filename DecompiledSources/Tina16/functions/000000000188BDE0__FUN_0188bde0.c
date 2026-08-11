/* Ghidra address: 0188bde0 */
/* Ghidra symbol: FUN_0188bde0 */


void FUN_0188bde0(longlong param_1)

{
  longlong *plVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  int iVar4;
  undefined1 auStack_278 [32];
  undefined8 local_258;
  undefined8 local_248;
  undefined1 *local_240;
  short *local_238;
  longlong local_228;
  short local_220 [256];
  int local_20;
  int local_1c;
  
  local_240 = auStack_278;
  local_248 = 0;
  FUN_0040d200(local_220,0x200,0);
  uVar2 = FUN_00416740(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x60));
  uVar3 = FUN_00416740(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xb0));
  local_258 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  local_20 = thunk_FUN_041f4de7(uVar2,uVar3,6,local_220);
  local_228 = FUN_004095c0((longlong)(local_20 * 0x30));
  uVar2 = FUN_00416740(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0x60));
  uVar3 = FUN_00416740(*(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xb0));
  local_258 = *(undefined8 *)(*(longlong *)(param_1 + 0x30) + 0xe0);
  thunk_FUN_041f4de7(uVar2,uVar3,0xc,local_228);
  local_1c = 0;
  if (-1 < local_20 + -1) {
    local_238 = local_220;
    iVar4 = local_20;
    do {
      if (*local_238 != 7) {
        FUN_00442b00(&local_248,local_228 + (longlong)(local_1c * 0x18) * 2);
        plVar1 = *(longlong **)(*(longlong *)(param_1 + 0x30) + 0x10);
        (**(code **)(*plVar1 + 0x80))(plVar1,local_248,*local_238);
      }
      local_1c = local_1c + 1;
      local_238 = local_238 + 1;
      iVar4 = iVar4 + -1;
    } while (iVar4 != 0);
  }
  FUN_004095f0(local_228,(longlong)(local_20 * 0x30));
  FUN_00414480(&local_248);
  return;
}

