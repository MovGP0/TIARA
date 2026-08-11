/* Ghidra address: 00ef6cf0 */
/* Ghidra symbol: FUN_00ef6cf0 */


void FUN_00ef6cf0(longlong param_1,longlong param_2)

{
  longlong lVar1;
  ulonglong uVar2;
  
  *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(param_2 + 8);
  lVar1 = *(longlong *)(param_1 + 0x90);
  do {
    if (lVar1 == 0) {
      return;
    }
    uVar2 = (ulonglong)**(byte **)(param_1 + 0x90);
    if (uVar2 < 0x57) {
      if (uVar2 - 0x18 < 2) {
LAB_00ef6d62:
        if (*(char *)(*(longlong *)(param_1 + 0x90) + 0xa5) == '\x03') {
          *(char *)(param_1 + 0x9f) = *(char *)(param_1 + 0x9f) + '\x02';
        }
      }
      else {
        if (3 < uVar2 - 0x1a) {
          uVar2 = uVar2 - 0x1e;
          goto joined_r0x00ef6d5e;
        }
LAB_00ef6d84:
        if (*(char *)(*(longlong *)(param_1 + 0x90) + 0xa5) == '\b') {
          *(char *)(param_1 + 0x9f) = *(char *)(param_1 + 0x9f) + '\x01';
        }
      }
    }
    else {
      if (uVar2 - 0x57 < 2) goto LAB_00ef6d62;
      if (uVar2 - 0x59 < 4) goto LAB_00ef6d84;
      uVar2 = uVar2 - 0x5d;
joined_r0x00ef6d5e:
      if ((uVar2 < 2) && (*(char *)(*(longlong *)(param_1 + 0x90) + 0xa5) == '\x02')) {
        *(char *)(param_1 + 0x9f) = *(char *)(param_1 + 0x9f) + '\x01';
      }
    }
    *(undefined8 *)(param_1 + 0x90) = *(undefined8 *)(*(longlong *)(param_1 + 0x90) + 0xb0);
    lVar1 = *(longlong *)(param_1 + 0x90);
  } while( true );
}

