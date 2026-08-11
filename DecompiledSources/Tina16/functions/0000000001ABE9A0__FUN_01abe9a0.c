/* Ghidra address: 01abe9a0 */
/* Ghidra symbol: FUN_01abe9a0 */


bool FUN_01abe9a0(undefined8 param_1,undefined8 param_2,undefined8 param_3,undefined8 *param_4,
                 undefined8 *param_5)

{
  char cVar1;
  longlong *plVar2;
  undefined8 uVar3;
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined8 local_50 [4];
  
  *param_4 = 0;
  *param_5 = 0;
  plVar2 = (longlong *)FUN_01cc6f70(&PTR_FUN_01cb9c30,1,param_1);
  (**(code **)(*plVar2 + 0x10))(plVar2,param_2,0);
  cVar1 = FUN_01abe490(param_2,plVar2,param_3,param_4);
  if (cVar1 != '\0') {
    (**(code **)(*plVar2 + 0x10))(plVar2,param_2,0);
    *(undefined8 *)PTR_DAT_02005620 = 0;
    *(undefined8 *)PTR_DAT_020041f8 = 0;
    (**(code **)(*plVar2 + 0x90))(plVar2,*param_4,local_50,&local_58);
    FUN_00c44460(local_68,local_50[0],local_58);
    uVar3 = FUN_00c44590(local_68);
    uVar3 = FUN_00c44470(uVar3,0);
    *param_5 = uVar3;
  }
  FUN_00410f20(plVar2);
  return cVar1 != '\0';
}

