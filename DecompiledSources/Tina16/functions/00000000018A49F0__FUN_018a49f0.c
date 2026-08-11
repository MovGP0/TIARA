/* Ghidra address: 018a49f0 */
/* Ghidra symbol: FUN_018a49f0 */


longlong FUN_018a49f0(longlong param_1,undefined8 param_2)

{
  int iVar1;
  longlong lVar2;
  
  lVar2 = FUN_006df4b0(*(undefined8 *)
                        (*(longlong *)
                          (*(longlong *)
                            (*(longlong *)(*(longlong *)(param_1 + 0xf8) + 0x538) + 0x508) + 0x718)
                        + 0x550));
  while( true ) {
    if (lVar2 == 0) {
      return 0;
    }
    iVar1 = FUN_00416db0(*(undefined8 *)(lVar2 + 0x10),param_2);
    if (iVar1 == 0) break;
    lVar2 = FUN_006dd600(lVar2);
  }
  return lVar2;
}

