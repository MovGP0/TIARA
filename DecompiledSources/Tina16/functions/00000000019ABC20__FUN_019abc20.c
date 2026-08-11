/* Ghidra address: 019abc20 */
/* Ghidra symbol: FUN_019abc20 */


void FUN_019abc20(longlong param_1,longlong *param_2)

{
  char cVar1;
  int iVar2;
  
  if (param_2 != (longlong *)0x0) {
    cVar1 = FUN_0198a580(param_2);
    if (cVar1 == '\x04') {
      iVar2 = FUN_01d07010(param_2);
      if (*(int *)(param_1 + 0x2c) == iVar2) {
        cVar1 = (**(code **)(*param_2 + 0x2d8))(param_2);
        if (cVar1 != '\0') {
          if (*(char *)(param_1 + 0x2b) != '\0') {
            FUN_019af250(*(undefined8 *)(param_1 + 0x50));
            *(undefined1 *)(param_1 + 0x2b) = 0;
          }
          cVar1 = (**(code **)(*(longlong *)param_2[0x33] + 0x98))((longlong *)param_2[0x33]);
          if (cVar1 == '\0') {
            if (*(char *)(param_1 + 0x2a) == '\0') {
              (**(code **)(*(longlong *)param_2[0x33] + 0x90))
                        ((longlong *)param_2[0x33],
                         *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x210));
            }
          }
          else {
            (**(code **)(*(longlong *)param_2[0x33] + 0x90))
                      ((longlong *)param_2[0x33],
                       *(undefined8 *)(*(longlong *)(param_1 + 0x50) + 0x210));
          }
        }
      }
      if ((*PTR_DAT_02003720 != '\0') || (*PTR_DAT_02002b78 != '\0')) {
        cVar1 = FUN_01d070b0(param_2,*(undefined4 *)(param_1 + 0x2c));
        if (cVar1 != '\0') {
          if (*(char *)(param_1 + 0x2b) != '\0') {
            FUN_019af250(*(undefined8 *)(param_1 + 0x50));
            *(undefined1 *)(param_1 + 0x2b) = 0;
          }
          FUN_0199e310(*(undefined8 *)(param_1 + 0x50),1,1,0);
          FUN_0064e770(*(undefined8 *)(*(longlong *)PTR_DAT_02004e40 + 0xa10));
          FUN_019af200(*(undefined8 *)(param_1 + 0x50),param_2);
        }
      }
      cVar1 = FUN_01d04d40(param_2);
      if (cVar1 != '\0') {
        FUN_0176a4e0(param_2[0x35],*(undefined8 *)(param_1 + 0x58));
      }
    }
  }
  return;
}

