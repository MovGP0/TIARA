/* Ghidra address: 0062d710 */
/* Ghidra symbol: FUN_0062d710 */


undefined8 FUN_0062d710(longlong param_1,uint param_2)

{
  longlong *plVar1;
  longlong *plVar2;
  longlong lVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = 0xfffffffe;
  if ((((param_1 != 0) && (*(longlong *)(param_1 + 0x30) != 0)) &&
      (*(code **)(param_1 + 0x38) != (code *)0x0)) &&
     (((plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0 && (*plVar2 == param_1))
      && ((int)plVar2[1] - 0x3f34U < 0x20)))) {
    if ((int)param_2 < 0) {
      iVar4 = 0;
      param_2 = -param_2;
    }
    else {
      iVar4 = (param_2 >> 4) + 5;
      if ((int)param_2 < 0x30) {
        param_2 = param_2 & 0xf;
      }
    }
    if ((param_2 == 0) || ((param_2 & 0xfffffff8) == 8)) {
      if ((plVar2[8] == 0) || (*(uint *)(plVar2 + 6) == param_2)) {
        *(int *)(plVar2 + 2) = iVar4;
        *(uint *)(plVar2 + 6) = param_2;
        lVar3 = *(longlong *)(param_1 + 0x38);
      }
      else {
        (**(code **)(param_1 + 0x38))(*(undefined8 *)(param_1 + 0x40));
        plVar2[8] = 0;
        lVar3 = *(longlong *)(param_1 + 0x30);
        *(int *)(plVar2 + 2) = iVar4;
        *(uint *)(plVar2 + 6) = param_2;
        if (lVar3 == 0) {
          return 0xfffffffe;
        }
        lVar3 = *(longlong *)(param_1 + 0x38);
      }
      if ((((lVar3 != 0) && (plVar2 = *(longlong **)(param_1 + 0x28), plVar2 != (longlong *)0x0)) &&
          (*plVar2 == param_1)) && ((int)plVar2[1] - 0x3f34U < 0x20)) {
        *(undefined8 *)((longlong)plVar2 + 0x34) = 0;
        *(undefined4 *)((longlong)plVar2 + 0x3c) = 0;
        *(undefined4 *)((longlong)plVar2 + 0x24) = 0;
        *(undefined4 *)(param_1 + 0x1c) = 0;
        *(undefined4 *)(param_1 + 0xc) = 0;
        *(undefined8 *)(param_1 + 0x20) = 0;
        if (*(uint *)(plVar2 + 2) != 0) {
          *(uint *)(param_1 + 0x4c) = *(uint *)(plVar2 + 2) & 1;
        }
        plVar2[1] = 0x3f34;
        *(undefined4 *)((longlong)plVar2 + 0x14) = 0;
        *(undefined4 *)((longlong)plVar2 + 0x1c) = 0x8000;
        plVar2[5] = 0;
        plVar2[9] = 0;
        plVar1 = plVar2 + 0xaa;
        plVar2[0x11] = (longlong)plVar1;
        plVar2[0xd] = (longlong)plVar1;
        plVar2[0xc] = (longlong)plVar1;
        plVar2[0x37c] = -0xffffffff;
        uVar5 = 0;
      }
    }
  }
  return uVar5;
}

