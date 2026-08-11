/* Ghidra address: 0161be50 */
/* Ghidra symbol: FUN_0161be50 */


undefined8 FUN_0161be50(longlong param_1,longlong param_2,undefined8 *param_3,undefined4 param_4)

{
  longlong lVar1;
  char cVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  
  lVar1 = *(longlong *)(param_2 + 0x20);
  uVar4 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x48);
  *param_3 = 0;
  uVar3 = 0;
  if (*(char *)(param_1 + 10) != '\0') {
    if (((*(char *)(param_1 + 0x21) == 'r') && (*(char *)(param_1 + 0x22) == '~')) &&
       (*(int *)(param_1 + 0x10) != 0)) {
      uVar3 = FUN_0161bc30(param_1,param_2,param_4);
    }
    else {
      cVar2 = FUN_0161bb80(param_1);
      if ((cVar2 == '\0') || (lVar1 == 0)) {
        cVar2 = FUN_0161bbd0(param_1);
        if (cVar2 == '\0') {
          cVar2 = FUN_0161bbf0(param_1,1);
          if (cVar2 == '\0') {
            cVar2 = FUN_0161bbb0(param_1);
            if (cVar2 == '\0') {
              FUN_01613110(L"VA_SelectObject");
              uVar3 = 0;
            }
            else {
              if (*(longlong *)(lVar1 + 0x5b0) == 0) {
                FUN_01613110(L"VA_SelectObject: process.FSession = NIL");
              }
              uVar3 = FUN_0162e870(*(undefined8 *)(lVar1 + 0x5b0),param_1);
            }
          }
          else {
            uVar4 = FUN_0161b950(*(undefined8 *)(param_2 + 8));
            FUN_01615b20(*(undefined8 *)(*(longlong *)(param_2 + 8) + 0x13a38),uVar4);
            uVar3 = *(undefined8 *)(*(longlong *)(param_2 + 8) + 0x13a38);
          }
        }
        else {
          uVar3 = *(undefined8 *)(param_1 + 0x18);
        }
      }
      else {
        uVar4 = FUN_0161bc10(*(undefined4 *)(lVar1 + 0x5bc),uVar4);
        *param_3 = uVar4;
        uVar3 = FUN_0161bcd0(param_1,*param_3,param_2,param_4);
      }
    }
  }
  return uVar3;
}

