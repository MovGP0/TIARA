/* Ghidra address: 00a0dee0 */
/* Ghidra symbol: FUN_00a0dee0 */


void FUN_00a0dee0(longlong *param_1,int param_2)

{
  longlong *plVar1;
  undefined8 *puVar2;
  longlong lVar3;
  longlong *plVar4;
  
  if (0 < param_2) {
    plVar1 = (longlong *)param_1[5];
    lVar3 = plVar1[1];
    plVar4 = plVar1;
    if ((int)lVar3 < param_2) {
      while( true ) {
        param_2 = param_2 - (int)lVar3;
        lVar3 = FUN_00a09b20(plVar4[8],1,0x1000,plVar4[7]);
        if (lVar3 == 0) {
          if ((int)plVar4[9] != 0) {
            puVar2 = (undefined8 *)*param_1;
            *(undefined4 *)(puVar2 + 5) = 0x2a;
            (*(code *)*puVar2)(param_1);
          }
          lVar3 = *param_1;
          *(undefined4 *)(lVar3 + 0x28) = 0x78;
          (**(code **)(lVar3 + 8))(param_1,0xffffffff);
          *(undefined1 *)plVar4[8] = 0xff;
          *(undefined1 *)(plVar4[8] + 1) = 0xd9;
          lVar3 = 2;
        }
        *plVar4 = plVar4[8];
        plVar4[1] = lVar3;
        *(undefined4 *)(plVar4 + 9) = 0;
        lVar3 = plVar1[1];
        if (param_2 <= (int)lVar3) break;
        plVar4 = (longlong *)param_1[5];
      }
    }
    *plVar1 = *plVar1 + (longlong)param_2;
    plVar1[1] = lVar3 - param_2;
  }
  return;
}

