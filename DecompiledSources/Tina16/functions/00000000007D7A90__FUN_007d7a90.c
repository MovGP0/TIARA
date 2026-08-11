/* Ghidra address: 007d7a90 */
/* Ghidra symbol: FUN_007d7a90 */


undefined8 FUN_007d7a90(longlong param_1,undefined1 param_2,undefined8 param_3,undefined4 param_4)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  
  uVar2 = 0;
  if (PTR_IMAGE_DOS_HEADER_0200c280 == *(undefined **)PTR_PTR_020028c0) {
    uVar2 = FUN_007d78e0(param_1,*(undefined8 *)PTR_PTR_020028c0,param_2,param_3,
                         *(undefined4 *)(param_1 + 0x94),0,param_4);
  }
  else {
    for (puVar1 = *(undefined8 **)PTR_PTR_02004e98; puVar1 != (undefined8 *)0x0;
        puVar1 = (undefined8 *)*puVar1) {
      uVar2 = FUN_007d78e0(param_1,puVar1[4],param_2,param_3,*(undefined4 *)(param_1 + 0x94),0,
                           param_4);
      if (((char)uVar2 == '\0') && (puVar1[1] != puVar1[4])) {
        uVar2 = FUN_007d78e0(param_1,puVar1[1],param_2,param_3,*(undefined4 *)(param_1 + 0x94),0,
                             param_4);
      }
      if ((char)uVar2 != '\0') {
        return uVar2;
      }
    }
  }
  return uVar2;
}

