/* Ghidra address: 01ab5750 */
/* Ghidra symbol: FUN_01ab5750 */


undefined8 FUN_01ab5750(longlong param_1,code *param_2,undefined8 *param_3,undefined8 *param_4)

{
  char cVar1;
  undefined8 local_48;
  undefined8 local_40 [2];
  
  (**(code **)(**(longlong **)(param_1 + 200) + 0x10))
            (*(longlong **)(param_1 + 200),*(undefined8 *)(param_1 + 0xe0),0);
  *(undefined8 *)PTR_DAT_02005620 = 0;
  *(undefined8 *)PTR_DAT_020041f8 = 0;
  (**(code **)(**(longlong **)(param_1 + 200) + 0x30))
            (*(longlong **)(param_1 + 200),param_3,param_4,0);
  while( true ) {
    cVar1 = (**(code **)(**(longlong **)(param_1 + 200) + 0x30))
                      (*(longlong **)(param_1 + 200),local_40,&local_48,0);
    if (cVar1 == '\0') break;
    cVar1 = (*param_2)(local_48,*param_4);
    if (cVar1 != '\0') {
      *param_3 = local_40[0];
      *param_4 = local_48;
    }
  }
  return 1;
}

