/* Ghidra address: 00a99b90 */
/* Ghidra symbol: FUN_00a99b90 */


void FUN_00a99b90(longlong *param_1)

{
  longlong lVar1;
  char cVar2;
  
  cVar2 = (**(code **)(*param_1 + 0x30))(param_1);
  if (cVar2 == '\0') {
    *(undefined1 *)(param_1 + 0x1d) = 1;
    (**(code **)(**(longlong **)(param_1[3] + 0xc0) + 0x180))(*(longlong **)(param_1[3] + 0xc0));
    (**(code **)(param_1[3] + 0x248))(*(undefined8 *)(param_1[3] + 0x250),param_1);
    lVar1 = param_1[3];
    if ((*(longlong *)(lVar1 + 0x128) != 0) && (param_1[0x27] != 0)) {
      (**(code **)(lVar1 + 0x128))
                (*(undefined8 *)(lVar1 + 0x130),*(undefined8 *)(lVar1 + 0xb8),param_1,param_1[0x27])
      ;
    }
    if (param_1[0x25] != 0) {
      (**(code **)(*param_1 + 0x128))(param_1);
    }
  }
  return;
}

