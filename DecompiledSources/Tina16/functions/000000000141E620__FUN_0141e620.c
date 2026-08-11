/* Ghidra address: 0141e620 */
/* Ghidra symbol: FUN_0141e620 */


void FUN_0141e620(undefined8 param_1,longlong param_2,undefined4 param_3)

{
  longlong lVar1;
  undefined8 uVar2;
  undefined8 local_30 [2];
  
  lVar1 = *(longlong *)(param_2 + 0x60);
  local_30[0] = FUN_00498310(*(undefined4 *)(lVar1 + 0x90),*(undefined4 *)(lVar1 + 0x88));
  uVar2 = FUN_017dcc40(param_1,local_30,param_3,0);
  *(undefined8 *)(lVar1 + 0x98) = uVar2;
  local_30[0] = FUN_00498310(*(undefined4 *)(lVar1 + 0x90),*(undefined4 *)(lVar1 + 0x8c));
  uVar2 = FUN_017dcc40(param_1,local_30,param_3,0);
  *(undefined8 *)(lVar1 + 0xa0) = uVar2;
  local_30[0] = FUN_00498310(*(undefined4 *)(lVar1 + 0x90),*(undefined4 *)(lVar1 + 0x94));
  uVar2 = FUN_017dcc40(param_1,local_30,param_3,0);
  *(undefined8 *)(lVar1 + 0xa8) = uVar2;
  local_30[0] = FUN_00498310(*(undefined4 *)(lVar1 + 0x94),*(undefined4 *)(lVar1 + 0x80));
  uVar2 = FUN_017dcc40(param_1,local_30,param_3,0);
  *(undefined8 *)(lVar1 + 0xb0) = uVar2;
  local_30[0] = FUN_00498310(*(undefined4 *)(lVar1 + 0x94),*(undefined4 *)(lVar1 + 0x84));
  uVar2 = FUN_017dcc40(param_1,local_30,param_3,0);
  *(undefined8 *)(lVar1 + 0xb8) = uVar2;
  local_30[0] = FUN_00498310(*(undefined4 *)(lVar1 + 0x94),*(undefined4 *)(lVar1 + 0x90));
  uVar2 = FUN_017dcc40(param_1,local_30,param_3,0);
  *(undefined8 *)(lVar1 + 0xc0) = uVar2;
  return;
}

