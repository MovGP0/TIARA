/* Ghidra address: 01c9d240 */
/* Ghidra symbol: FUN_01c9d240 */


void FUN_01c9d240(void)

{
  undefined8 uVar1;
  undefined8 local_10;
  
  local_10 = 0;
  FUN_00414b50(&local_10,
               L"http://focus.ti.com/adc/docs/portal.tsp?sectionId=121&contentId=23493&DCMP=hpa_design_center&HQS=Tools+OT+analogdesigncenter"
              );
  uVar1 = FUN_00416740(local_10);
  thunk_FUN_0419adcc(0,L"open",uVar1,0,0,1);
  FUN_00414480(&local_10);
  return;
}

