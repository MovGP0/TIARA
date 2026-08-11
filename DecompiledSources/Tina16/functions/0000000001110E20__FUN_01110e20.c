/* Ghidra address: 01110e20 */
/* Ghidra symbol: FUN_01110e20 */


longlong FUN_01110e20(longlong param_1,char param_2,undefined8 param_3)

{
  undefined1 *puVar1;
  ulonglong uVar2;
  longlong local_res8;
  undefined1 auStack_58 [40];
  undefined1 *local_30;
  byte local_19;
  
  local_30 = auStack_58;
  local_res8 = param_1;
  puVar1 = auStack_58;
  if (param_2 != '\0') {
    local_res8 = FUN_004119e0(param_1,param_2);
    puVar1 = local_30;
  }
  local_30 = puVar1;
  FUN_00660290(local_res8,0,param_3);
  *(uint *)(local_res8 + 0xa0) = *(uint *)(local_res8 + 0xa0) | 0x40;
  FUN_011110d0(local_res8);
  *(undefined2 *)(local_res8 + 0x5b8) = 0x1ff;
  *(undefined2 *)(local_res8 + 0x5ba) = 0x1ff;
  *(undefined2 *)(local_res8 + 0x5bc) = 0x1ff;
  local_19 = 0;
  do {
    uVar2 = (ulonglong)local_19;
    *(undefined1 *)(local_res8 + 0x498 + uVar2 * 0x20) = 1;
    *(undefined1 *)(local_res8 + 0x499 + uVar2 * 0x20) = 1;
    *(undefined1 *)(local_res8 + 0x49a + uVar2 * 0x20) = 1;
    *(undefined1 *)(local_res8 + 0x49b + uVar2 * 0x20) = 0;
    local_19 = local_19 + 1;
  } while (local_19 != 9);
  FUN_0064cbf0(local_res8,0xf0);
  FUN_0064cc50(local_res8,0x1e);
  *(undefined1 *)(local_res8 + 0x610) = 0;
  *(undefined1 *)(local_res8 + 0x658) = 1;
  *(undefined1 *)(local_res8 + 0x659) = 0;
  *(undefined1 *)(local_res8 + 0x65a) = 1;
  *(undefined1 *)(local_res8 + 0x624) = 0;
  FUN_0065bce0(local_res8,1);
  if (param_2 != '\0') {
    local_res8 = FUN_00411a20(local_res8);
  }
  return local_res8;
}

