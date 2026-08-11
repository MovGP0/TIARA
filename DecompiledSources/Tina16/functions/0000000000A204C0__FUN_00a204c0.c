/* Ghidra address: 00a204c0 */
/* Ghidra symbol: FUN_00a204c0 */


void FUN_00a204c0(longlong *param_1,int param_2)

{
  undefined8 *puVar1;
  undefined8 uVar2;
  int *piVar3;
  longlong lVar4;
  
  puVar1 = (undefined8 *)(**(code **)param_1[1])(param_1,1,0x70);
  param_1[0x37] = (longlong)puVar1;
  *puVar1 = &LAB_00a20580;
  if ((int)param_1[0x20] == 0) {
    if (param_2 != 0) {
      puVar1 = (undefined8 *)*param_1;
      *(undefined4 *)(puVar1 + 5) = 4;
                    /* WARNING: Could not recover jumptable at 0x00a20520. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)*puVar1)(param_1);
      return;
    }
    if (0 < *(int *)((longlong)param_1 + 0x4c)) {
      piVar3 = (int *)(param_1[0xb] + 0x1c);
      lVar4 = 0;
      do {
        uVar2 = (**(code **)(param_1[1] + 0x10))(param_1,1,*piVar3 << 3,piVar3[-4] << 3);
        puVar1[lVar4 + 4] = uVar2;
        lVar4 = lVar4 + 1;
        piVar3 = piVar3 + 0x18;
      } while (lVar4 < *(int *)((longlong)param_1 + 0x4c));
    }
  }
  return;
}

