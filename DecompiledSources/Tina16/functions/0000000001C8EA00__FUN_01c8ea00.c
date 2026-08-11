/* Ghidra address: 01c8ea00 */
/* Ghidra symbol: FUN_01c8ea00 */


void FUN_01c8ea00(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  undefined8 *puVar3;
  undefined8 uVar4;
  undefined1 local_2b;
  undefined1 local_2a;
  undefined1 local_29 [9];
  
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 == '\x04') {
    sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
    if ((sVar2 != 0x3d) && (sVar2 = (**(code **)(*param_2 + 0xf8))(param_2), sVar2 != 0x65)) {
      return;
    }
    puVar3 = (undefined8 *)FUN_01cfde70(param_2,1,0,local_29,&local_2a,&local_2b);
    if (*(char *)(param_1 + 0x2f) == '\0') {
      uVar4 = FUN_00b90620(*(undefined8 *)(param_1 + 0x20),*puVar3);
      *(undefined8 *)(param_1 + 0x20) = uVar4;
    }
    else {
      *(undefined8 *)(param_1 + 0x20) = *puVar3;
      *(undefined1 *)(param_1 + 0x2f) = 0;
    }
  }
  return;
}

