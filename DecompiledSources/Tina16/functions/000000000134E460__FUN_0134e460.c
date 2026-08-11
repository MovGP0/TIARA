/* Ghidra address: 0134e460 */
/* Ghidra symbol: FUN_0134e460 */


void FUN_0134e460(undefined8 param_1,longlong param_2)

{
  undefined1 uVar1;
  longlong lVar2;
  
  if (*(char *)(param_2 + 0xa2f) != '\0') {
    *(undefined8 *)(param_2 + 0x70) = *(undefined8 *)PTR_DAT_02004e40;
    *(code **)(param_2 + 0x68) = FUN_01c88f60;
    FUN_00f83590(param_2 + 0x68);
    FUN_01c88f60(*(undefined8 *)PTR_DAT_02004e40,
                 *(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x148));
  }
  FUN_016d7a10(*(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x148));
  if (*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) != 0) {
    FUN_019af4b0(*(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) + 0xa0));
    if (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) + 0x49c) == '\x01' ||
        *(char *)(param_2 + 0xa17) != '\0') {
      FUN_017cc920(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148));
    }
    else {
      lVar2 = *(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148);
      if ((*(char *)(lVar2 + 0x49c) != '\x01') && (*(char *)(lVar2 + 0x884) != '\0')) {
        FUN_017d0c90(lVar2,*(undefined8 *)(lVar2 + 0xb0),0,*(undefined8 *)(lVar2 + 0x888),
                     *(undefined8 *)(param_2 + 0xa00),0);
      }
      FUN_013d2f60(*(undefined8 *)(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) + 0xb0),0,0)
      ;
    }
  }
  FUN_0132cce0(param_2 + 0x9f8);
  FUN_0132cce0(param_2 + 0x9f0);
  lVar2 = FUN_004097b0();
  if ((lVar2 != 0) && (*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) != 0)) {
    FUN_017cc920(*(undefined8 *)(*(longlong *)PTR_DAT_02003c48 + 0x148));
    *(undefined1 *)(param_2 + 0xa17) = 1;
  }
  if ((*(char *)(param_2 + 0xa17) == '\0') &&
     ((*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) == 0 ||
      (*(char *)(*(longlong *)(*(longlong *)PTR_DAT_02003c48 + 0x148) + 0x49c) != '\x01')))) {
    uVar1 = 0;
  }
  else {
    uVar1 = 1;
  }
  *(undefined1 *)(param_2 + 0xa17) = uVar1;
  FUN_013335a0(*(undefined8 *)PTR_DAT_02003c48);
  FUN_00417c40(PTR_DAT_02004010,param_2 + 0xb0,&DAT_01d0d0b8);
  return;
}

