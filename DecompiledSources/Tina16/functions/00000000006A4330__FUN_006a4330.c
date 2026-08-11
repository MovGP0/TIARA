/* Ghidra address: 006a4330 */
/* Ghidra symbol: FUN_006a4330 */


undefined4 FUN_006a4330(longlong param_1,int param_2,longlong *param_3)

{
  undefined8 uVar1;
  undefined4 uVar2;
  undefined8 unaff_RDI;
  longlong *local_res18 [2];
  
  if (param_2 < 0) {
    uVar2 = 0;
  }
  else {
    uVar2 = (undefined4)
            CONCAT71((int7)((ulonglong)unaff_RDI >> 8),
                     param_2 < *(int *)(*(longlong *)(*(longlong *)(param_1 + 0x188) + 0x10) + 0x10)
                    );
  }
  if ((char)uVar2 != '\0') {
    local_res18[0] = param_3;
    uVar1 = FUN_006a35d0(*(undefined8 *)(param_1 + 0x188),param_2);
    (**(code **)(*local_res18[0] + 0x10))(local_res18[0],uVar1);
    if (*(longlong *)(param_1 + 400) != 0) {
      (**(code **)(param_1 + 400))(*(undefined8 *)(param_1 + 0x198),param_1,param_2,local_res18);
    }
  }
  return uVar2;
}

