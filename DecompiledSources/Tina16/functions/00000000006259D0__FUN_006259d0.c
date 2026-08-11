/* Ghidra address: 006259d0 */
/* Ghidra symbol: FUN_006259d0 */


void FUN_006259d0(longlong param_1,short *param_2,longlong param_3,undefined8 param_4)

{
  undefined8 uVar1;
  undefined1 auStack_168 [32];
  longlong local_148;
  undefined1 local_130 [256];
  undefined8 local_30;
  
  if (0x40 < *(byte *)(param_3 + 1)) {
    uVar1 = FUN_0044d710(&PTR_FUN_00620870,1,PTR_PTR_02002aa0);
    FUN_004134c0(uVar1);
  }
  if (*param_2 == 9) {
    local_30 = *(undefined8 *)(param_2 + 4);
  }
  else if (*param_2 == 0x4009) {
    local_30 = **(undefined8 **)(param_2 + 4);
  }
  else {
    FUN_006259a0(auStack_168);
  }
  FUN_006256c0(local_30,param_3 + 3 + (ulonglong)*(byte *)(param_3 + 1),*(byte *)(param_3 + 2) + 1,
               local_130);
  if (param_1 != 0) {
    FUN_00460b80(param_1);
  }
  local_148 = param_1;
  FUN_006252d0(local_30,param_3,local_130,param_4);
  return;
}

