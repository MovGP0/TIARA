/* Ghidra address: 0060e470 */
/* Ghidra symbol: FUN_0060e470 */


void FUN_0060e470(longlong param_1,byte param_2)

{
  undefined8 *puVar1;
  
  if (param_2 != *(byte *)(param_1 + 0x68)) {
    *(undefined1 *)(param_1 + 0x7c) = 1;
    *(byte *)(param_1 + 0x68) = param_2;
    if (param_2 < 4) {
      if (param_2 == 3) {
        puVar1 = (undefined8 *)(PTR_DAT_02004228 + 8);
        *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)PTR_DAT_02004228;
        *(undefined8 *)(param_1 + 0x74) = *puVar1;
      }
      else if (param_2 == 0) {
        puVar1 = (undefined8 *)(PTR_DAT_02001eb0 + 8);
        *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)PTR_DAT_02001eb0;
        *(undefined8 *)(param_1 + 0x74) = *puVar1;
      }
      else if (param_2 == 1) {
        puVar1 = (undefined8 *)(PTR_DAT_020019f8 + 8);
        *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)PTR_DAT_020019f8;
        *(undefined8 *)(param_1 + 0x74) = *puVar1;
      }
      else if (param_2 == 2) {
        puVar1 = (undefined8 *)(PTR_DAT_02003dc8 + 8);
        *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)PTR_DAT_02003dc8;
        *(undefined8 *)(param_1 + 0x74) = *puVar1;
      }
    }
    else if (param_2 == 4) {
      puVar1 = (undefined8 *)(PTR_DAT_02004ee0 + 8);
      *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)PTR_DAT_02004ee0;
      *(undefined8 *)(param_1 + 0x74) = *puVar1;
    }
    else if (param_2 == 5) {
      puVar1 = (undefined8 *)(PTR_DAT_02005018 + 8);
      *(undefined8 *)(param_1 + 0x6c) = *(undefined8 *)PTR_DAT_02005018;
      *(undefined8 *)(param_1 + 0x74) = *puVar1;
    }
  }
  return;
}

