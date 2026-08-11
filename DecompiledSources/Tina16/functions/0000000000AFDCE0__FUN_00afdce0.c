/* Ghidra address: 00afdce0 */
/* Ghidra symbol: FUN_00afdce0 */


undefined8 FUN_00afdce0(longlong param_1,undefined8 param_2)

{
  undefined1 auStack_48 [42];
  ushort local_1e;
  int local_1c;
  
  local_1c = *(int *)(param_1 + 0x80);
LAB_00afdcfd:
  do {
    FUN_00afdca0(auStack_48);
    if (local_1e < 0x21) {
      if (local_1e != 0) goto LAB_00afdcfd;
    }
    while (local_1e == 0x3e) {
      do {
        FUN_00afdca0(auStack_48);
        if (local_1e == 0x3c) break;
      } while (local_1e != 0);
      FUN_00afdca0(auStack_48);
    }
    if ((0x20 < local_1e) || (local_1e == 0)) {
      if (local_1e == 0) {
        local_1c = local_1c + -1;
      }
      FUN_00416dc0(param_2,*(undefined8 *)(param_1 + 0x70),1,local_1c);
      return param_2;
    }
  } while( true );
}

