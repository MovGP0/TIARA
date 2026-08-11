/* Ghidra address: 0129db70 */
/* Ghidra symbol: FUN_0129db70 */


void FUN_0129db70(char param_1,char param_2,longlong param_3,undefined8 *param_4)

{
  longlong lVar1;
  undefined8 *puVar2;
  undefined8 *puVar3;
  undefined8 local_58 [2];
  undefined1 local_48;
  undefined1 local_47;
  undefined8 local_46;
  
  puVar2 = local_58;
  for (lVar1 = 8; lVar1 != 0; lVar1 = lVar1 + -1) {
    *puVar2 = *param_4;
    param_4 = param_4 + 1;
    puVar2 = puVar2 + 1;
  }
  *(undefined8 *)(param_3 + 0x2b0) = local_58[0];
  if ((param_1 == '\x01') || (param_2 != '\x02')) {
    *(undefined8 *)(param_3 + 0x2b8) = local_58[1];
  }
  *(undefined1 *)(param_3 + 0x2ad) = local_48;
  if (param_2 == '\x03') {
    *(undefined1 *)(param_3 + 0x2ac) = local_47;
    puVar2 = &local_46;
    puVar3 = (undefined8 *)(param_3 + 1000);
    for (lVar1 = 5; lVar1 != 0; lVar1 = lVar1 + -1) {
      *puVar3 = *puVar2;
      puVar2 = puVar2 + 1;
      puVar3 = puVar3 + 1;
    }
    *(undefined4 *)puVar3 = *(undefined4 *)puVar2;
    *(undefined1 *)((longlong)puVar3 + 4) = *(undefined1 *)((longlong)puVar2 + 4);
  }
  return;
}

