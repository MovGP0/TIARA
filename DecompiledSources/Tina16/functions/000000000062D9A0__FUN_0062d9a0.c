/* Ghidra address: 0062d9a0 */
/* Ghidra symbol: FUN_0062d9a0 */


int FUN_0062d9a0(longlong param_1,char *param_2,int param_3)

{
  longlong lVar1;
  int iVar2;
  longlong *plVar3;
  code *pcVar4;
  
  iVar2 = -6;
  if (((param_2 != (char *)0x0) && (param_3 == 0x58)) && (*param_2 == '1')) {
    if (param_1 == 0) {
      iVar2 = -2;
    }
    else {
      *(undefined8 *)(param_1 + 0x20) = 0;
      pcVar4 = *(code **)(param_1 + 0x30);
      if (pcVar4 == (code *)0x0) {
        pcVar4 = FUN_00634f40;
        *(code **)(param_1 + 0x30) = FUN_00634f40;
        *(undefined8 *)(param_1 + 0x40) = 0;
        lVar1 = *(longlong *)(param_1 + 0x38);
      }
      else {
        lVar1 = *(longlong *)(param_1 + 0x38);
      }
      if (lVar1 == 0) {
        *(undefined1 **)(param_1 + 0x38) = &LAB_00634f50;
      }
      plVar3 = (longlong *)(*pcVar4)(*(undefined8 *)(param_1 + 0x40),1,0x1bf0);
      if (plVar3 == (longlong *)0x0) {
        iVar2 = -4;
      }
      else {
        *(longlong **)(param_1 + 0x28) = plVar3;
        *plVar3 = param_1;
        plVar3[8] = 0;
        *(undefined4 *)(plVar3 + 1) = 0x3f34;
        iVar2 = FUN_0062d710(param_1,0xf);
        if (iVar2 == 0) {
          iVar2 = 0;
        }
        else {
          (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40),plVar3);
          *(undefined8 *)(param_1 + 0x28) = 0;
        }
      }
    }
  }
  return iVar2;
}

