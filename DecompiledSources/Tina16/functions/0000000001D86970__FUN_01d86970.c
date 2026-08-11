/* Ghidra address: 01d86970 */
/* Ghidra symbol: FUN_01d86970 */


undefined8
FUN_01d86970(longlong param_1,undefined4 param_2,undefined8 param_3,undefined4 param_4,
            float *param_5,char *param_6)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  double local_30;
  
  uVar4 = 1;
  *param_6 = '\0';
  lVar1 = *(longlong *)(param_1 + 0x68);
  if (lVar1 != 0) {
    if (*(longlong *)(*(longlong *)(lVar1 + 0x8c0) + 0x408) !=
        *(longlong *)(*(longlong *)PTR_DAT_02004e40 + 0x2788)) {
      FUN_010e19d0(lVar1);
      uVar3 = FUN_0065b870(*(undefined8 *)(param_1 + 0x68));
      thunk_FUN_041b2403(uVar3,0x1234,0,
                         (longlong)
                         *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x68) + 0x8c0) + 0x408));
    }
    cVar2 = FUN_01b6f090(*(undefined8 *)(param_1 + 0x68),param_2,param_3,param_4,&local_30);
    *param_6 = cVar2;
    if (*param_6 == '\x01') {
      *param_5 = (float)local_30;
      uVar4 = 0;
    }
  }
  return uVar4;
}

