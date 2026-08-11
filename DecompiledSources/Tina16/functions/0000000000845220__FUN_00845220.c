/* Ghidra address: 00845220 */
/* Ghidra symbol: FUN_00845220 */


void FUN_00845220(longlong param_1,undefined4 *param_2)

{
  char cVar1;
  code *pcVar2;
  undefined1 auStack_c8 [32];
  uint *local_a8;
  uint local_90;
  uint local_8c;
  undefined1 local_88 [56];
  undefined1 local_50 [64];
  
  FUN_008453a0(param_1);
  FUN_00841d10(param_1,local_88);
  local_a8 = &local_90;
  cVar1 = FUN_00845150(auStack_c8,local_88,*param_2,*(undefined4 *)(param_1 + 0x4e8));
  if (cVar1 != '\0') {
    local_a8 = &local_8c;
    cVar1 = FUN_00845150(auStack_c8,local_50,param_2[1],*(undefined4 *)(param_1 + 0x4ec));
    if (cVar1 != '\0') {
      FUN_00844ea0(param_1,local_90,local_8c,local_88);
    }
  }
  pcVar2 = (code *)FUN_00411550(param_1,0xff9f);
  (*pcVar2)(param_1);
  return;
}

