/* Ghidra address: 008074f0 */
/* Ghidra symbol: FUN_008074f0 */


void FUN_008074f0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  code *pcVar2;
  undefined1 local_28 [16];
  
  FUN_0065a630(param_1,param_2);
  if (*(longlong *)(param_2 + 0x10) == 0) {
    FUN_0064fca0(param_1,0xb039,0,*(undefined8 *)(param_2 + 8));
    lVar1 = *(longlong *)(param_2 + 8);
    if (*(longlong *)(lVar1 + 0x108) == param_1) {
      FUN_0064d000(lVar1,local_28);
      pcVar2 = (code *)FUN_00411550(lVar1,0xffca);
      (*pcVar2)(lVar1,0xffffffff,local_28);
    }
  }
  return;
}

