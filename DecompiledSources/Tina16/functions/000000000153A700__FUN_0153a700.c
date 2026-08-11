/* Ghidra address: 0153a700 */
/* Ghidra symbol: FUN_0153a700 */


void FUN_0153a700(longlong param_1,longlong *param_2)

{
  char cVar1;
  short sVar2;
  undefined8 uVar3;
  bool bVar4;
  
  cVar1 = FUN_0198a580(param_2);
  if (cVar1 != '\x04') goto LAB_0153a78d;
  sVar2 = (**(code **)(*param_2 + 0xf8))(param_2);
  cVar1 = FUN_0153a250(*(undefined1 *)(param_1 + 0x70),param_2);
  if (cVar1 == '\0') goto LAB_0153a78d;
  *(longlong **)(**(longlong **)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x2c) * 8) = param_2
  ;
  if ((sVar2 == 0x3d) || (sVar2 == 0x65)) {
LAB_0153a76b:
    *(longlong **)(**(longlong **)(param_1 + 0x60) + (longlong)(*(int *)(param_1 + 0x2c) + 1) * 8) =
         param_2;
    *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
  }
  else {
    cVar1 = FUN_01b05ff0(param_2);
    if (cVar1 != '\0') goto LAB_0153a76b;
  }
  *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
LAB_0153a78d:
  uVar3 = FUN_0198a580(param_2);
  if (((char)uVar3 == '\x06') && (-1 < (short)param_2[0x5b])) {
    if (*(byte *)(param_1 + 0x70) < 8) {
      bVar4 = ((int)CONCAT71((int7)((ulonglong)uVar3 >> 8),1) << (*(byte *)(param_1 + 0x70) & 0x1f)
              & 0x32U) != 0;
    }
    else {
      bVar4 = false;
    }
    if (bVar4) {
      *(longlong **)(**(longlong **)(param_1 + 0x60) + (longlong)*(int *)(param_1 + 0x2c) * 8) =
           param_2;
      *(int *)(param_1 + 0x2c) = *(int *)(param_1 + 0x2c) + 1;
    }
  }
  return;
}

