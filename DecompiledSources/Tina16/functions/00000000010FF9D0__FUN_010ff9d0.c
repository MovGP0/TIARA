/* Ghidra address: 010ff9d0 */
/* Ghidra symbol: FUN_010ff9d0 */


void FUN_010ff9d0(longlong param_1,longlong *param_2)

{
  longlong *plVar1;
  
  plVar1 = (longlong *)FUN_005fc570(&PTR_FUN_005f2d40,1);
  (**(code **)(*plVar1 + 0x10))(plVar1,param_2[0xe]);
  (**(code **)(*(longlong *)param_2[0xe] + 0x10))
            ((longlong *)param_2[0xe],*(undefined8 *)(param_1 + 0xa0));
  (**(code **)(*param_2 + 0x120))
            (param_2,*(undefined4 *)(param_1 + 0x48),*(undefined4 *)(param_1 + 0x4c),
             *(undefined8 *)(param_1 + 0xa8));
  (**(code **)(*(longlong *)param_2[0xe] + 0x10))
            ((longlong *)param_2[0xe],*(undefined8 *)(param_1 + 0xa0));
  return;
}

